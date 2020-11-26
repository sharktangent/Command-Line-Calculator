//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"

class Mod_Command : public Binary_Op_Command
{
public:
    /// Initialization Constructor
    Mod_Command (Stack <int> & s);

    /// Destructor
    ~Mod_Command (void);

    /**
     * Get the modulus of two numbers.
     * 
     * @param[in]       n1      Dividend.
     * @param[in]       n2      Divisor.
     * @return          Modulus of n1 and n2.
     */  
    int eval (int n1, int n2) override;

    /// Gets the priority of the command
    int priority (void) override;
};

#endif