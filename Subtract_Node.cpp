//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Subtract_Node.h"

//
// Subtract_Node
//
Subtract_Node::Subtract_Node (void)
{

}

//
// ~Subtract_Node
//
Subtract_Node::~Subtract_Node (void)
{
    // no members on heap
}

//
// eval
//
int Subtract_Node::eval (int n1, int n2)
{   
    // return the difference of n1 and n2
    return n1 - n2;
}

//
// priority
//
int Subtract_Node::priority (void)
{
    // priority of subtract is 1
    return 1;
}

//
// accept
//
void Subtract_Node::accept (Expr_Node_Visitor & v)
{
    // pass this node to the visitor
    v.visit_subtract_node(this);
}
