//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUBTRACT_NODE_H_
#define _SUBTRACT_NODE_H

#include "Binary_Op_Node.h"

class Subtract_Node : public Binary_Op_Node
{
public:
    /// Default Constructor
    Subtract_Node (void);

    /// Destructor
    ~Subtract_Node (void);

    /**
     * Get the difference of two numbers.
     * 
     * @param[in]       n1      First Number
     * @param[in]       n2      Second Number
     * @return          Difference of n1 and n2
     */
    int eval (int n1, int n2) override;

    /// Accepts the visitor to this node
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;

};

#endif