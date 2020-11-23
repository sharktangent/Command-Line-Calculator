//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _STACK_BINARY_OP_COMMAND_H_
#define _STACK_BINARY_OP_COMMAND_H_

#include "Stack.h"
#include "Binary_Op_Command.h"
#include "Stack_Expr_Command.h"
#include <stdexcept>

class Stack_Binary_Op_Command : public Binary_Op_Command, public Stack_Expr_Command
{
    int execute (void) override;

    virtual int eval (int n1, int n2) override = 0;

protected:
    /// Initialization Constructor
    Stack_Binary_Op_Command (Stack <int> & s);
};

#endif