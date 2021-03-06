//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MULTIPLY_NODE_H_
#define _MULTIPLY_NODE_H_

#include "Binary_Op_Node.h"



class Multiply_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Multiply_Node (void);

    /// Destructor
    ~Multiply_Node (void);

    /// Accept the visitor to this node.
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command.
    int priority (void) override;
};

#endif