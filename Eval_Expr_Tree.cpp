//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Eval_Expr_Tree.h"

//
// Eval_Expr_Tree
//
Eval_Expr_Tree::Eval_Expr_Tree (void)
: result_ (0),
  coresult_ (0)
{

}

//
// ~Eval_Expr_Tree
//
Eval_Expr_Tree::~Eval_Expr_Tree (void)
{
    // No members on heap.
}

//
// visit_add_node
//
void Eval_Expr_Tree::visit_add_node (Add_Node * node)
{
    // visit the left child, and set coresult to the value of result
    // coresult gets 0 if the left child doesn't exist
    if (node->has_left())
    {
        node->left()->accept(*this);
        this->coresult_ = this->result_;
    }
    else
    {
        this->coresult_ = 0;
    }

    // visit the right child
    // result gets 0 if right child doesn't exist
    if (node->has_right())
    {
        node->right()->accept(*this);
    }
    else
    {
        this->result_ = 0;
    }

    // perform addition
    this->result_ = this->coresult_ + this->result_;
}

//
// visit_subtract_node
//
void Eval_Expr_Tree::visit_subtract_node (Subtract_Node * node)
{
    // visit the left child, and set coresult to the value of result
    // coresult gets 0 if the left child doesn't exist
    if (node->has_left())
    {
        node->left()->accept(*this);
        this->coresult_ = this->result_;
    }
    else
    {
        this->coresult_ = 0;
    }

    // visit the right child
    // result gets 0 if right child doesn't exist
    if (node->has_right())
    {
        node->right()->accept(*this);
    }
    else
    {
        this->result_ = 0;
    }

    this->result_ = this->coresult_ - this->result_;
}

//
// visit_multiply_node
//
void Eval_Expr_Tree::visit_multiply_node (Multiply_Node * node)
{
    // visit the left child, and set coresult to the value of result
    // coresult gets 0 if the left child doesn't exist
    if (node->has_left())
    {
        node->left()->accept(*this);
        this->coresult_ = this->result_;
    }
    else
    {
        this->coresult_ = 0;
    }

    // visit the right child
    // result gets 0 if right child doesn't exist
    if (node->has_right())
    {
        node->right()->accept(*this);
    }
    else
    {
        this->result_ = 0;
    }

    this->result_ = this->coresult_ * this->result_;
}

//
// visit_divide_node
//
void Eval_Expr_Tree::visit_divide_node (Divide_Node * node)
{
    // visit the left child, and set coresult to the value of result
    // coresult gets 0 if the left child doesn't exist
    if (node->has_left())
    {
        node->left()->accept(*this);
        this->coresult_ = this->result_;
    }
    else
    {
        this->coresult_ = 0;
    }

    // visit the right child
    // result gets 0 if right child doesn't exist
    if (node->has_right())
    {
        node->right()->accept(*this);
    }
    else
    {
        this->result_ = 0;
    }

    // Throw in case of a divide by 0
    if (this->result_ == 0)
    {
        throw std::domain_error("Error: Divide by Zero");
    }

    this->result_ = this->coresult_ / this->result_;
}

//
// visit_mod_node
//
void Eval_Expr_Tree::visit_mod_node (Mod_Node * node)
{
    // visit the left child, and set coresult to the value of result
    // coresult gets 0 if the left child doesn't exist
    if (node->has_left())
    {
        node->left()->accept(*this);
        this->coresult_ = this->result_;
    }
    else
    {
        this->coresult_ = 0;
    }

    // visit the right child
    // result gets 0 if right child doesn't exist
    if (node->has_right())
    {
        node->right()->accept(*this);
    }
    else
    {   
        this->result_ = 0;
    }

    // throw in case of a divide by 0
    if (this->result_ == 0)
    {
        throw std::domain_error("Error: Divide by Zero.");
    }

    // Perform modulus
    this->result_ = this->coresult_ % this->result_;
}

//
// visit_number_node
//
void Eval_Expr_Tree::visit_number_node (Number_Node * node)
{
    // set result to the number held within node.
    this->result_ = node->num();
}

//
// result
//
int Eval_Expr_Tree::result (void)
{
    return this->result_;
}