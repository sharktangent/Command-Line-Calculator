//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Divide_Command.h"

//
// Divide_Command
//
Divide_Command::Divide_Command (Stack <int> & s)
: Binary_Op_Command (s)
{

}

//
// ~Divide_Command
//
Divide_Command::~Divide_Command (void)
{
    // No members on heap
}

//
// eval
//
int Divide_Command::eval (int n1, int n2)
{
    // check to make sure there won't be a divide by 0 error
    // throw if there will be.
    if (n2 == 0)
    {
        throw std::domain_error("Error: Divide by 0.");
    }

    // Return the quotient of n1 and n2
    return n1 / n2;
}

//
// priority
//
int Divide_Command::priority (void)
{   
    // priority for divide is 2
    return 2;
}