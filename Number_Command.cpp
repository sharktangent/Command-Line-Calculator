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
    this->set_priority();
}

//
// execute
//
void Number_Command::execute (void)
{
    // push the number to the stack
    this->stack_.push(this->num_);
}

//
// set_priority
//
void Number_Command::set_priority (void)
{
    // even though number commands will automatically
    // be put in the postfix array and wont need compared,
    // give them a priority of 0.
    this->priority_ = 0;
}