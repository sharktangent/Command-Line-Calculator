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
// Binary_Op_Node
//
Binary_Op_Node::Binary_Op_Node (void)
: right_ (nullptr),
  left_ (nullptr)
{

}

//
// ~Binary_Op_Node
//
Binary_Op_Node::~Binary_Op_Node (void)
{
    // delete the left and right child.
    delete this->right_;
    delete this->left_;
}

//
// right
//
Expr_Node * Binary_Op_Node::right (void)
{   
    // Throw if the right child is null
    if (this->right_ == nullptr)
    {
        throw std::out_of_range("Right child doesn't exist");
    }

    // return the right child
    return this->right_;
}

//
// left
// 
Expr_Node * Binary_Op_Node::left (void)
{
    // throw if the left child is null
    if (this->left_ == nullptr)
    {
        throw std::out_of_range("Left child doesn't exist");
    }

    // return the left child
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

//
// has_right
//
bool Binary_Op_Node::has_right (void)
{
    // return true if the right child exists
    // return false otherwise
    if (this->right_ != nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//
// has_left
//
bool Binary_Op_Node::has_left (void)
{
    // return true if the left child exists
    // return false otherwise
    if (this->left_ != nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}