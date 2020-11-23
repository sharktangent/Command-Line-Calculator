//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Expr_Command.h"

class Expr_Node : public Expr_Command
{   
public:
    /// Destructor
    virtual ~Expr_Node (void) = 0;
};

#endif