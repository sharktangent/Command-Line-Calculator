//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

#include "Stack.h"

class Expr_Command
{
public:
    /// Destructor
    virtual ~Expr_Command (void) = 0;

    /// Executes the expression command
    virtual int execute (void) = 0;

protected:
    /// initialization constructor
    Expr_Command (Stack <int> & s);

    // priority of the command which determines the order of execution.
    int priority_;

    Stack <int> & stack_;
};

#endif