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

}

//
// ~Multiply_Command
//
Multiply_Command::~Multiply_Command (void)
{
    // No members on heap
}

//
// evaluate
//
int Multiply_Command::eval (int n1, int n2)
{
    // Return the product of n1 and n2
    return n1 * n2;
}

//
// priority
//
int Multiply_Command::priority (void)
{
    // priority for multiply is 2
    return 2;
}