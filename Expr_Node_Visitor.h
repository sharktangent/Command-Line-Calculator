//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

#include "Number_Node.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Multiply_Node.h"
#include "Divide_Node.h"
#include "Mod_Node.h"

class Expr_Node_Visitor
{
public:
    /// Default Constructor
    Expr_Node_Visitor (void);

    /// Destructor
    virtual ~Expr_Node_Visitor (void) = 0;

    virtual void visit_add_node (Add_Node * node) = 0;

    virtual void visit_subtract_node (Subtract_Node * node) = 0;

    virtual void visit_multiply_node (Multiply_Node * node) = 0;

    virtual void visit_divide_node (Divide_Node * node) = 0;

    virtual void visit_mod_node (Mod_Node * node) = 0;

    virtual void visit_number_node (Number_Node * node) = 0;
};

#endif