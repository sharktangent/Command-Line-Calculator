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
: priority_(0),
  stack_ (s)
{

}

//
// ~Expr_Command
//
Expr_Command::~Expr_Command (void)
{
    // No members on heap.
}

//
// priority
//
int Expr_Command::priority (void)
{
    return this->priority_;
}