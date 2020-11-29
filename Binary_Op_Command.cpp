//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#include "Binary_Op_Command.h"

//
// Binary_Op_Command
//
Binary_Op_Command::Binary_Op_Command (Stack <int> & s)
: Expr_Command (s)
{

}

//
// execute
//
void Binary_Op_Command::execute (void)
{
    int n1, n2;
    int result;

    // try to get num 2, set num 2 to 0 if stack is empty
    try
    {
        n2 = this->stack_.top();
        this->stack_.pop();
    }
    catch (const Stack <int>::empty_exception & e)
    {
        n2 = 0;
    }

    // try to get num 1, set num 1 to 0 if stack is empty
    try
    {
        n1 = this->stack_.top();
        this->stack_.pop();
    }
    catch (const Stack <int>::empty_exception & e)
    {
        n1 = 0;
    }

    // try and evaluate the command for num 1 and num 2
    // catch any arithmetic errors such as divide by 0
    // I have used the std::domain_error exception to throw
    // arithmetic errors.

    try
    {
        result = this->eval(n1, n2);
    }
    catch (const std::domain_error & e)
    {
        // throw if an arithmetic error is caught
        throw e;
    }
    
    // push the result to the stack.
    stack_.push(result);

}