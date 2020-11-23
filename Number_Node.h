//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Expr_Node.h"
#include "Number_Command.h"

class Number_Node : public Expr_Node, public Number_Command
{
public:
    /// Constructor
    Number_Node (int n);


    int execute (void) override;

};

#endif