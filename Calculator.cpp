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
: infix_ (),
  builder_ ()
{

}

//
// ~Calculator
//
Calculator::~Calculator (void)
{
    
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
// set_input
//
void Calculator::set_input (std::string input)
{
    this->infix_ = input;
}

//
// infix_to_postfix
//
void Calculator::parse_expr (void)
{
    // input stream parser
    std::stringstream input (this->infix_);
    // token to hold each part of the expression
    std::string token;

    // calculator for allowing parentheses
    Calculator parenth;

    int num;

    // start a new expression
    this->builder_.start_expression();

    // loop until the end of the input stream is reached
    while (!input.eof())
    {
        // put input into token
        input >> token;

        // determine the token type and use the builder to create the correct token
        if (token == "+")
        {
            this->builder_.build_add_op();
        }
        else if (token == "-")
        {
            this->builder_.build_subtract_op();
        }
        else if (token == "*")
        {
            this->builder_.build_multiply_op();
        }
        else if (token == "/")
        {
            this->builder_.build_divide_op();
        }
        else if (token == "%")
        {
            this->builder_.build_mod_op();
        }
        else if (token == "(")
        {

            // separate the parenthetical part of the string to pass to parenth
            std::getline(input, token);
            try 
            {
                // set the input on the parenth expression
                // parse parenth and set num to the result of parenth
                parenth.set_input(token);
                parenth.parse_expr();
                num = parenth.evaluate_expr();

                // build the result of parenth, and set the str for input
                // to what remains of parenth's infix.
                this->builder_.build_number(num);
                input.str(parenth.get_infix());
            }
            catch (const std::invalid_argument & e)
            {
                // throw if invalid argument is caught
                throw e;
            }
            catch (const std::domain_error & e)
            {
                // throw if domain error
                throw e;
            }
        }
        else if (token == ")")
        {
            break;
        }
        else
        {
            try
            {
                num = std::stoi(token);
            }
            catch (const std::invalid_argument & e)
            {
                throw e;
            }

            this->builder_.build_number(num);
        }
    }

    // getline so that if a closing parentheses breaks the expression
    // the rest of the expression can be returned in get_infix
    std::getline(input, this->infix_);
}

//
// evaluate_postfix
//
int Calculator::evaluate_expr (void)
{
    // visitor to evaluate the expression.
    Eval_Expr_Tree eval;
    try
    {
        // accept eval for the root of builder
        this->builder_.get_root()->accept(eval);
    }
    catch (const std::domain_error & e)
    {
        // throw if a domain error is caught
        throw e;
    }

    // return the result.
    return eval.result();
}

//
// get_infix
//
std::string Calculator::get_infix (void)
{
    return this->infix_;
}