//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Multiply_Node.h"

//
// Multiply_Node
//
Multiply_Node::Multiply_Node (void)
: Binary_Op_Node ()
{

}

//
// ~Multiply_Node
//
Multiply_Node::~Multiply_Node (void)
{
    // No members on heap
}

//
// eval
//
int Multiply_Node::priority (void)
{
    // priority of Multiply is 2
    return 2;
}

//
// accept
//
void Multiply_Node::accept (Expr_Node_Visitor & v)
{
    v.visit_multiply_node(this);
}