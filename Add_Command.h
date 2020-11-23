//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"

class Add_Command : public Binary_Op_Command
{
public:
    /// Initialization Constructors
    Add_Command (Stack <int> & s);

    /**
     * Evaluate the sum of two numbers.
     * 
     * @param[in]       n1      First number in the operation
     * @param[in]       n2      Second number in the operation
     * @return          Sum of n1 and n2
     */
    int evaluate (int n1, int n2) const override;

protected:
    /// sets the priority value for the command
    void set_priority (void) override;
};

#endif