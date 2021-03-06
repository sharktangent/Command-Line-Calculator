//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#include "Number_Command.h"

//
// Number_Command
//
Number_Command::Number_Command (Stack <int> & s, int n)
: Expr_Command (s),
  num_ (n)
{
    
}

//
// execute
//
void Number_Command::execute (void)
{
    // push the number to the stack
    this->stack_.push(this->num_);
}