//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "Binary_Op_Command.h"

class Multiply_Command : public Binary_Op_Command
{
public:
    /// Initialization Constructor
    Multiply_Command (Stack <int> & s);

    /// Destructor
    ~Multiply_Command (void);

    /**
     * Get the product of two numbers.
     * 
     * @param[in]       n1      First factor.
     * @param[in]       n2      Second factor.
     * @return          Product of n1 and n2.
     */
    int eval (int n1, int n2) override;

    /// Gets the priority for the command
    int priority (void) override;

};

#endif