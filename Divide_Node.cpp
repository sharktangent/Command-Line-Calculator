//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Divide_Node.h"
#include <stdexcept>

//
// Divide_Node
//
Divide_Node::Divide_Node (void)
: Binary_Op_Node ()
{

}

//
// ~Divide_Node
//
Divide_Node::~Divide_Node (void)
{
    // No members on heap
}

//
// priority
//
int Divide_Node::priority (void)
{
    // The priority of divide is 2;
    return 2;
}

// 
// accept
//
void Divide_Node::accept (Expr_Node_Visitor & v)
{
    /// Pass this node to the visitor
    v.visit_divide_node(this);
}