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

}

//
// ~Add_Command
//
Add_Command::~Add_Command (void)
{
    // No members on heap
}

//
// evaluate
//
int Add_Command::eval (int n1, int n2)
{
    // Return the sum of n1 and n2
    return n1 + n2;
}

//
// priority
//
int Add_Command::priority (void) 
{
    // priority for add is 1
    return 1;
}