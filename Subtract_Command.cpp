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
    
}

//
// ~Subtract_Command
//
Subtract_Command::~Subtract_Command (void)
{
    // No members on heap
}

//
// evaluate
//
int Subtract_Command::eval (int n1, int n2)
{
    // Return the difference of n1 and n2
    return n1 - n2;
}

//
// priority
//
int Subtract_Command::priority (void)
{
    // priority for subtract is 1.
    return 1;
}