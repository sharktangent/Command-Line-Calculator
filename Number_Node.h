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

class Number_Node : public Expr_Node
{
public:
    /// Constructor
    Number_Node (int n);

    /// Destructor
    ~Number_Node (void);

    /// Get the number held within the node
    int num (void);

    /// Accepts the visitor to this node.
    void accept (Expr_Node_Visitor & v);
protected:
    /// Number stored within the number node.
    int num_;
};

#endif