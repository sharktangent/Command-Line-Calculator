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
// eval
//
int Divide_Node::eval (int n1, int n2)
{   
    // Throw For a divide by zero error
    if (n2 == 0)
    {
        throw std::domain_error("Error: Divide by Zero.");
    }

    // return the quotient of n1 and n2
    return n1 / n2;
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