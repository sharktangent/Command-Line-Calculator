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
// eval
//
int Mod_Node::eval (int n1, int n2)
{
    // throw for a divide by zero error.
    if (n2 == 0)
    {
        throw std::domain_error("Error: Divide by Zero.");
    }

    // return the mod of n1 and n2
    return n1 % n2;
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