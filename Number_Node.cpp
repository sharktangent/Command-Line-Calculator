//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Number_Node.h"
#include <stdexcept>

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

//
// priority
//
int Number_Node::priority (void)
{
    // priority of a number is 3
    return 3;
}

//
// right
//
Expr_Node * Number_Node::right (void)
{
    return nullptr;
}

//
// left
//
Expr_Node * Number_Node::left (void)
{
    return nullptr;
}

//
// has_right
//
bool Number_Node::has_right (void)
{
    return false;
}

//
// has_left
//
bool Number_Node::has_left (void)
{
    return false;
}

void Number_Node::set_right (Expr_Node * node)
{
    throw std::out_of_range("Cannot set right child");
}

void Number_Node::set_left (Expr_Node * node)
{
    throw std::out_of_range("Cannot set left child.");
}

