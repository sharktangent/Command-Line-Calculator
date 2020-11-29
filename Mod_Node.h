//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Binary_Op_Node.h"
#include "Mod_Command.h"

class Mod_Node : public Binary_Op_Node
{
public:

    // Default Constructor
    Mod_Node (void);

    /// Destructor
    ~Mod_Node (void);

    /// Accept the visitor to this node.
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;
};

#endif