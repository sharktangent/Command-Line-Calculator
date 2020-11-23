//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Calculator.h"

//
// Calculator
//
Calculator::Calculator (void)
: int_stack_ (),
  factory_ (int_stack_),
  infix_ (),
  postfix_ ()
{

}

//
// ~Calculator
//
Calculator::~Calculator (void)
{
    // Delete postfix_'s pointers since the Array Class
    // Wont be able to do so on its own.
    for (int i = 0; i < this->postfix_.size(); i++)
    {
        delete this->postfix_[i];
    }
}

//
// get_input
//
bool Calculator::get_input (void)
{
    std::cout << "Enter an expression to evaluate, Enter QUIT to quit." << std::endl;
    std::getline(std::cin, this->infix_);

    if (this->infix_ == "QUIT")
    {
        return false;
    }
    
    return true;
}

//
// infix_to_postfix
//
void Calculator::infix_to_postfix (void)
{
    std::istringstream input(this->infix_);
    std::string token;
    int num;
    Expr_Command * cmd = nullptr;

    // A stack of stacks allows for easy managing of parentheses
    // a new stack will be added upon open parentheses
    // nested stacks are popped upon closing parentheses
    Stack <Stack <Expr_Command *> *> cmd_stacks;

    cmd_stacks.push(new Stack <Expr_Command *>());

    // read through the infix expression
    while (!input.eof())
    {
        input >> token;

        if (token == "+")
        {
            cmd = this->factory_.create_add_command();
        }
        else if (token == "-")
        {
            cmd = this->factory_.create_subtract_command();
        }
        else if (token == "*")
        {
            cmd = this->factory_.create_multiply_command();
        }
        else if (token == "/")
        {
            cmd = this->factory_.create_divide_command();
        }
        else if (token == "%")
        {
            cmd = this->factory_.create_mod_command();
        }
        else if (token == "(")
        {
            // push a new stack onto cmd_stacks
            cmd_stacks.push(new Stack <Expr_Command *>());
        }
        else if (token == ")")
        {
            // move all commands in the current stack to the postfix array.
            while(!cmd_stacks.top()->is_empty())
            {
                this->postfix_.resize(this->postfix_.size() + 1);
                this->postfix_[this->postfix_.size() - 1] = cmd_stacks.top()->top();
                cmd_stacks.top()->pop();
            }

            // move down a stack only
            // if thesize of cmd_stacks is greater than 1
            // to prevent popping the first stack.
            if (cmd_stacks.size() > 1)
            {
                // delete the top stack and then pop it
                delete cmd_stacks.top();
                cmd_stacks.pop();
            }
        }
        else
        {
            // try to convert token to a number, throw if failed
            try
            {
                num = std::stoi(token);
            }
            catch (const std::invalid_argument & e)
            {
                throw e;
            }

            cmd = this->factory_.create_number_command(num);

            // put the command into the postfix array
            this->postfix_.resize(this->postfix_.size() + 1);
            this->postfix_[this->postfix_.size() - 1] = cmd;
        }

        // if the command is an operator
        if (cmd != nullptr && cmd->priority() != 0)
        {
            // move higher priority operators to the postfix array before pushing cmd
            while (!cmd_stacks.top()->is_empty() && cmd->priority() <= cmd_stacks.top()->top()->priority())
            {
                // insert the command into postfix
                this->postfix_.resize(this->postfix_.size() + 1);
                this->postfix_[this->postfix_.size() - 1] = cmd_stacks.top()->top();
                cmd_stacks.top()->pop();
            }

            // push cmd to the stack
            cmd_stacks.top()->push(cmd);
        }
        
        // reset cmd to nullptr
        cmd = nullptr;
    }

    // put the remaining commands into the postfix array
    while (!cmd_stacks.is_empty())
    {
        // put commands from the top stack into the postfix array
        while (!cmd_stacks.top()->is_empty())
        {
            this->postfix_.resize(this->postfix_.size() + 1);
            this->postfix_[this->postfix_.size() - 1] = cmd_stacks.top()->top();
            cmd_stacks.top()->pop();
        }

        // delete then pop the top stack;
        delete cmd_stacks.top();
        cmd_stacks.pop();
    }
}

//
// evaluate_postfix
//
void Calculator::evaluate_postfix (void)
{
    // create the iterator for the postfix array
    Array_Iterator <Expr_Command *> iter(this->postfix_);

    // try to evaluate the expression. catch 
    try
    {
        for (; !iter.is_done(); iter.next())
        {
            iter.current_item()->execute();
        }

        // check to make sure the stack isn't empty
        // before trying to print.
        if (!this->int_stack_.is_empty())
        {
            std::cout << this->int_stack_.top() << std::endl;
        }
        else
        {
            std::cout << "0" << std::endl;
        }
    }
    catch (const std::domain_error & e)
    {
        std::cout << "Error: Divide by 0" << std::endl;
    }
}

//
// reset_postfix
//
void Calculator::reset_postfix (void)
{
    // delete every command in postfix
    for (int i = 0; i < this->postfix_.size(); i++)
    {
        delete this->postfix_[i];
    }

    // set size to 0.
    this->postfix_.resize(0);
}