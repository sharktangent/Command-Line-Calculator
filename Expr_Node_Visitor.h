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


class Number_Node;
class Add_Node;
class Subtract_Node;
class Multiply_Node;
class Divide_Node;
class Mod_Node;


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