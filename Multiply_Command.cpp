//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Multiply_Command.h"

//
// Multiply_Command
//
Multiply_Command::Multiply_Command (Stack <int> & s)
: Binary_Op_Command (s)
{
    this->set_priority();
}

//
// evaluate
//
int Multiply_Command::evaluate (int n1, int n2) const
{
    // Return the product of n1 and n2
    return n1 * n2;
}

//
// set_priority
//
void Multiply_Command::set_priority (void)
{
    // priority for multiply is 2
    this->priority_ = 2;
}