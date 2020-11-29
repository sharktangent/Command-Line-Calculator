//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINARY_OP_NODE_H_
#define _BINARY_OP_NODE_H_

#include "Expr_Node.h"
#include <stdexcept>

class Binary_Op_Node : public Expr_Node
{
public:

    /// Default Constructor
    Binary_Op_Node (void);

    /// Destructor
    ~Binary_Op_Node (void);

    Expr_Node * right (void) override;

    Expr_Node * left (void) override;

    bool has_right (void) override;

    bool has_left (void) override;

    void set_right (Expr_Node * node) override;

    void set_left (Expr_Node * node) override;

protected:

    /// right child of the binary operator
    Expr_Node * right_;
    
    /// left child of the binary operator
    Expr_Node * left_;
};

#endif