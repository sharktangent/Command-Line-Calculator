//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Add_Command.h"

//
// Add_Command
//
Add_Command::Add_Command (Stack <int> & s)
: Binary_Op_Command (s)
{
    this->set_priority();
}

//
// evaluate
//
int Add_Command::evaluate (int n1, int n2) const
{
    // Return the sum of n1 and n2
    return n1 + n2;
}

//
// set_priority
//
void Add_Command::set_priority (void)
{
    // priority for add is 1
    this->priority_ = 1;
}