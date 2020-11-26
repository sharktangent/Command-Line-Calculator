//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Number_Node.h"

//
// Number_Node
//
Number_Node::Number_Node (int n)
: num_ (n)
{

}

//
// ~Number_Node
//
Number_Node::~Number_Node (void)
{
    // No members on heap
}

//
// num
//
int Number_Node::num (void)
{
    return this->num_;
}

//
// accept.
//
void Number_Node::accept (Expr_Node_Visitor & v)
{
    // Pass this node to the visitor
    v.visit_number_node(this);
}