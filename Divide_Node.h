//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVIDE_NODE_H_
#define _DIVIDE_NODE_H_

#include "Binary_Op_Node.h"

class Divide_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Divide_Node (void);

    ~Divide_Node (void);

    /// Accept the visitor to this node
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;
};

#endif