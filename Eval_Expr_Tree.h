//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_

#include "Expr_Node_Visitor.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Multiply_Node.h"
#include "Divide_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"

class Eval_Expr_Tree : public Expr_Node_Visitor
{
public:
    /// Default Constructor
    Eval_Expr_Tree (void);

    /// Destructor
    ~Eval_Expr_Tree (void);

    void visit_add_node (Add_Node * node) override;

    void visit_subtract_node (Subtract_Node * node) override;

    void visit_multiply_node (Multiply_Node * node) override;

    void visit_divide_node (Divide_Node * node) override;

    void visit_mod_node (Mod_Node * node) override;

    void visit_number_node (Number_Node * node) override;

    int result (void);

private:
    /// int to hold the result
    int result_;

    /// int to assist in calculating the result
    int coresult_;

};


#endif