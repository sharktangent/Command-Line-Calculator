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

    /// Destructor
    ~Divide_Command (void);
    
    /**
     * Get the quotient of two numbers
     * 
     * @param[in]       n1      Dividend
     * @param[in]       n2      Divisor
     * @return          Quotient of n1 and n2.
     */
    int eval (int n1, int n2) override;

    /// Gets the priority of the command
    int priority (void) override;
};

#endif