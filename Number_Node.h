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

    int priority (void) override;

    Expr_Node * right (void) override;

    Expr_Node * left (void) override;

    bool has_right (void) override;

    bool has_left (void) override;

    void set_right (Expr_Node * node) override;

    void set_left (Expr_Node * node) override;

protected:
    /// Number stored within the number node.
    int num_;
};

#endif