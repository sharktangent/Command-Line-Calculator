//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

class Number_Command : public Expr_Command
{
public:
    /// Initialization Constructor.
    Number_Command (Stack <int> & s, int n);

    /// Executes the Number Command.
    void execute (void) override;

private:
    /// Number to be pushed
    int num_;
};

#endif