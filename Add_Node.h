//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

#include "Binary_Op_Node.h"


//class Expr_Node_Visitor;

class Add_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Add_Node (void);

    /// Destructor
    ~Add_Node (void);

    /// Accepts the visitor to the node.
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command.
    int priority (void) override;
};

#endif