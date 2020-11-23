//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"
#include <stdexcept>

class Binary_Op_Command : public Expr_Command
{
public:

    /// Execute the Binary operation command.
    void execute (void) override;

    /**
     * Evaluate the result of the command
     * 
     * @param[in]       n1      First number in the operation
     * @param[in]       n2      Second number in the operation
     * @return          Result of the command.
     */
    virtual int evaluate (int n1, int n2) const = 0;


protected:
    /// Initialization Constructor
    Binary_Op_Command (Stack <int> & s);

    /// sets the priority value for the command
    virtual void set_priority (void) override = 0;
};

#endif