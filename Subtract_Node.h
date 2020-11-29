//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUBTRACT_NODE_H_
#define _SUBTRACT_NODE_H_

#include "Binary_Op_Node.h"

//class Expr_Node_Visitor;

class Subtract_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Subtract_Node (void);

    /// Destructor
    ~Subtract_Node (void);

    /// Accepts the visitor to this node
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;

};

#endif