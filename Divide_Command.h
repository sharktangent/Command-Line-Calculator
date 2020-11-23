//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "Binary_Op_Command.h"

class Divide_Command : public Binary_Op_Command
{
public:
    /// Initialization Constructor.
    Divide_Command (Stack <int> & s);
    
    /**
     * Get the quotient of two numbers
     * 
     * @param[in]       n1      Dividend
     * @param[in]       n2      Divisor
     * @return          Quotient of n1 and n2.
     */
    int evaluate (int n1, int n2) const override;

protected:
    /// sets the priority value for the command
    void set_priority (void) override;
};

#endif