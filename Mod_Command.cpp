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
    this->set_priority();
}

//
// evaluate
//
int Mod_Command::evaluate (int n1, int n2) const
{
    // Throw if the Divisor is 0
    if (n2 == 0)
    {
        throw std::domain_error("Error: Divide by 0.");
    }

    return n1 % n2;
}

//
// set_priority
//
void Mod_Command::set_priority (void)
{
    // priority for mod is 2
    this->priority_ = 2;
}