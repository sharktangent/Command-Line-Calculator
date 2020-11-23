//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Subtract_Command.h"

//
// Subtract_Command
//
Subtract_Command::Subtract_Command (Stack <int> & s)
: Binary_Op_Command (s)
{
    this->set_priority();
}

//
// evaluate
//
int Subtract_Command::evaluate (int n1, int n2) const
{
    // Return the difference of n1 and n2
    return n1 - n2;
}

//
// set_priority
//
void Subtract_Command::set_priority (void)
{
    // priority for subtract is 1.
    this->priority_ = 1;
}