//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Multiply_Node.h"
#include "Divide_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"
#include "Standard_Node_Command_Factory.h"

class Expr_Tree_Builder : public Expr_Builder
{
public:
    /// Default Constructor
    Expr_Tree_Builder (void);

    /// Destructor
    ~Expr_Tree_Builder (void);

    /// Starts the expression builder
    void start_expression (void) override;

    /// Builders a number node
    void build_number (int n) override;

    /// Builds an addition operator
    void build_add_op (void) override;

    /// Builds a subtraction operator
    void build_subtract_op (void) override;

    /// builds a multiplication operator
    void build_multiply_op (void) override;

    /// builds a division operator
    void build_divide_op (void) override;

    /// builds a modulo operator
    void build_mod_op (void) override;

    Expr_Node * get_root (void);

private:

    /// Root node of the expression tree
    Expr_Node * root_;

    Standard_Node_Command_Factory factory_;
};

#endif