//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Mod_Node.h"
#include <stdexcept>

//
// Mod_Node
//
Mod_Node::Mod_Node (void)
: Binary_Op_Node ()
{

}

//
// ~Mod_Node
//
Mod_Node::~Mod_Node (void)
{
    // no members on heap
}

//
// priority
//
int Mod_Node::priority (void)
{
    // priority of mod is 2
    return 2;
}

//
// accept
// 
void Mod_Node::accept (Expr_Node_Visitor & v)
{
    // Pass this node to the visitor.
    v.visit_mod_node(this);
}