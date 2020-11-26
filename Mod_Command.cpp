//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Mod_Command.h"

//
// Mod_Command
//
Mod_Command::Mod_Command (Stack <int> & s)
: Binary_Op_Command (s)
{

}

//
// ~Mod_Command
//
Mod_Command::~Mod_Command (void)
{
    // No members on heap.
}

//
// evaluate
//
int Mod_Command::eval (int n1, int n2)
{
    // Throw if the Divisor is 0
    if (n2 == 0)
    {
        throw std::domain_error("Error: Divide by 0.");
    }

    return n1 % n2;
}

//
// priority
//
int Mod_Command::priority (void)
{
    // priority for mod is 2
    return 2;
}