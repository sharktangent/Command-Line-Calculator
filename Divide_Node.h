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

    /**
     * Get the quotient of two numbers
     * 
     * @param[in]       n1      Dividend
     * @param[in]       n2      Divisor
     * @return          Quotient of n1 and n2.
     */
    int eval (int n1, int n2) override;

    /// Accept the visitor to this node
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;
};

#endif