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
    virtual void execute (void) = 0;

    /**
     * Get the priority of the command.
     * 
     * @return      The priority of the command
     */
    virtual int priority (void);

protected:
    /// initialization constructor
    Expr_Command (Stack <int> & s);

    /// sets the priority value for the command
    virtual void set_priority (void) = 0;

    // priority of the command which determines the order of execution.
    int priority_;

    Stack <int> & stack_;
};

#endif