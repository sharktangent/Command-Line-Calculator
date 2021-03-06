//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Add_Node.h"

//
// Add_Node
//
Add_Node::Add_Node (void)
: Binary_Op_Node ()
{

}

//
// ~Add_Node
//
Add_Node::~Add_Node (void)
{
    // no members on heap
}

//
// priority
//
int Add_Node::priority (void)
{
    return 1;
}

//
// accept
//
void Add_Node::accept (Expr_Node_Visitor & v) 
{
    // pass this node to the visitor
    v.visit_add_node(this);
}