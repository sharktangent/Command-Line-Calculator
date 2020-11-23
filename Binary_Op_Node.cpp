//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Binary_Op_Node.h"


//
// ~Binary_Op_Node
//
Binary_Op_Node::~Binary_Op_Node (void)
{
    delete this->right_;
    delete this->left_;
}

//
// execute
//
int Binary_Op_Node::execute (void) 
{

}


//
// right
//
Expr_Node * Binary_Op_Node::right (void)
{
    return this->right_;
}

//
// left
// 
Expr_Node * Binary_Op_Node::left (void)
{
    return this->left_;
}

//
// set_right
//
void Binary_Op_Node::set_right (Expr_Node * node)
{
    this->right_ = node; 
}

//
// set_left
//
void Binary_Op_Node::set_left (Expr_Node * node)
{
    this->left_ = node;
}
