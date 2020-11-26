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

    virtual void execute (void) = 0;

protected:
    /// Default Constructor
    Expr_Command (Stack <int> & s);

    Stack <int> stack_;
};

#endif