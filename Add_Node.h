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
#include "Add_Command.h"

class Add_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Add_Node (void);

    /// Destructor
    ~Add_Node (void);

    /**
     * Evaluate the sum of two numbers.
     * 
     * @param[in]       n1      First number in the operation
     * @param[in]       n2      Second number in the operation
     * @return          Sum of n1 and n2
     */
    int eval (int n1, int n2) override;

    /// Accepts the visitor to the node.
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command.
    int priority (void) override;
};

#endif