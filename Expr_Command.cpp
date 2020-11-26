//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Expr_Command.h"


Expr_Command::Expr_Command (Stack <int> & s)
: stack_ (s)
{

}

//
// ~Expr_Command
//
Expr_Command::~Expr_Command (void)
{
    // No members on heap.
}