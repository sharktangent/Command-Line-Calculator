//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Binary_Op_Command.h"

class Subtract_Command : public Binary_Op_Command
{
public:
    /// Initialization Constructor
    Subtract_Command (Stack <int> & s);

    /**
     * Get the difference of two numbers.
     * 
     * @param[in]       n1      First Number
     * @param[in]       n2      Second Number
     * @return          Difference of n1 and n2
     */
    int evaluate (int n1, int n2) const override;

protected:
    /// sets the priority value for the command
    void set_priority (void) override;
};

#endif