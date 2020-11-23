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
#include "Binary_Op_Command.h"

class Binary_Op_Node :public Binary_Op_Command, public Expr_Node
{
public:

    /// destructor
    ~Binary_Op_Node (void);

    int execute (void) override;

    Expr_Node * right (void);

    Expr_Node * left (void);

    void set_right (Expr_Node * node);

    void set_left (Expr_Node * node);

protected:

    /// default constructor
    Binary_Op_Node (void);

    /// right child of the binary operator
    Expr_Node * right_;
    
    /// left child of the binary operator
    Expr_Node * left_;
};

#endif