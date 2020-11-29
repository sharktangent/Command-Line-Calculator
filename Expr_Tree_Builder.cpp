//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Expr_Tree_Builder.h"
#include <stdexcept>

//
// Expr_Tree_Builder
//
Expr_Tree_Builder::Expr_Tree_Builder (void)
: root_ (nullptr),
  factory_ ()
{

}

//
// ~Expr_Tree_Builder
//
Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
    // Delete the root which will recusively delete the tree
    delete this->root_;
}

//
// start_expression
//
void Expr_Tree_Builder::start_expression (void)
{
    // make sure the root is cleared before the expression begins.
    delete this->root_;
    this->root_ = nullptr;
}

//
// build_number
//
void Expr_Tree_Builder::build_number (int n)
{
    if (this->root_ == nullptr)
    {
        this->root_ = this->factory_.create_number_command(n);
    }
    else
    {
        // current node gets the root
        Expr_Node * cur_node = this->root_;

        // while the current node has a right child, set the current node to the right child
        while (cur_node->has_right())
        {
            cur_node = cur_node->right();
        }

        // if current node is not a number node, set the right child to a new number command
        if (cur_node->priority() != 0)
        {
            cur_node->set_right(this->factory_.create_number_command(n));
        }
        else
        {
            // throw a domain error if the current node is a number node
            throw std::domain_error("Number cannot have child nodes.");
        }
        
    }
}

//
// build_add_op
//
void Expr_Tree_Builder::build_add_op (void)
{

    // Expr_Node cmd gets an add command from the factory
    Expr_Node * cmd = this->factory_.create_add_command();

    // if the tree is empty, set the root to cmd
    if (this->root_ == nullptr)
    {
        this->root_ = cmd;
    }
    else
    {
        // if the priority of the root is greater than or equal to cmd's priority
        if (this->root_->priority() >= cmd->priority())
        {
            // make cmd the new root and put everything else left to cmd.
            cmd->set_left(this->root_);
            this->root_ = cmd;
        }
        else
        {
            // if the root has a right child,
            if (this->root_->has_right())
            {
                // set the left of cmd to the roots right
                // the root's right is then set to cmd
                cmd->set_left(this->root_->right());
                this->root_->set_right(cmd);
            }
            else
            {
                // set the root's right to cmd
                this->root_->set_right(cmd);
            }
        }
    }
}

//
// build_subtract_op
//
void Expr_Tree_Builder::build_subtract_op (void)
{
    // Expr_Node cmd gets a subtract command from the factory
    Expr_Node * cmd = this->factory_.create_subtract_command();

    // if the tree is empty, set the root to cmd
    if (this->root_ == nullptr)
    {
        this->root_ = cmd;
    }
    else
    {
        // if the priority of the root is greater than or equal to cmd's priority
        if (this->root_->priority() >= cmd->priority())
        {
            // make cmd the new root and put everything else left to cmd.
            cmd->set_left(this->root_);
            this->root_ = cmd;
        }
        else
        {
            // if the root has a right child,
            if (this->root_->has_right())
            {
                // set the left of cmd to the roots right
                // the root's right is then set to cmd
                cmd->set_left(this->root_->right());
                this->root_->set_right(cmd);
            }
            else
            {
                // set the root's right to cmd
                this->root_->set_right(cmd);
            }
        }
    }
}

//
// build_multiply_op
//
void Expr_Tree_Builder::build_multiply_op (void)
{
    // Expr_Node cmd gets a multiply command from the factory
    Expr_Node * cmd = this->factory_.create_multiply_command();

    // if the tree is empty, set the root to cmd
    if (this->root_ == nullptr)
    {
        this->root_ = cmd;
    }
    else
    {
        // if the priority of the root is greater than or equal to cmd's priority
        if (this->root_->priority() >= cmd->priority())
        {
            // make cmd the new root and put everything else left to cmd.
            cmd->set_left(this->root_);
            this->root_ = cmd;
        }
        else
        {
            // if the root has a right child,
            if (this->root_->has_right())
            {
                // set the left of cmd to the roots right
                // the root's right is then set to cmd
                cmd->set_left(this->root_->right());
                this->root_->set_right(cmd);
            }
            else
            {
                // set the root's right to cmd
                this->root_->set_right(cmd);
            }
        }
    }
}

//
// build_divide_op
//
void Expr_Tree_Builder::build_divide_op (void)
{
    // Expr_Node cmd gets a divide command from the factory
    Expr_Node * cmd = this->factory_.create_divide_command();

    // if the tree is empty, set the root to cmd
    if (this->root_ == nullptr)
    {
        this->root_ = cmd;
    }
    else
    {
        // if the priority of the root is greater than or equal to cmd's priority
        if (this->root_->priority() >= cmd->priority())
        {
            // make cmd the new root and put everything else left to cmd.
            cmd->set_left(this->root_);
            this->root_ = cmd;
        }
        else
        {
            // if the root has a right child,
            if (this->root_->has_right())
            {
                // set the left of cmd to the roots right
                // the root's right is then set to cmd
                cmd->set_left(this->root_->right());
                this->root_->set_right(cmd);
            }
            else
            {
                // set the root's right to cmd
                this->root_->set_right(cmd);
            }
        }
    }
}

//
// build_mod_op
//
void Expr_Tree_Builder::build_mod_op (void)
{
    // Expr_Node cmd gets a mod command from the factory
    Expr_Node * cmd = this->factory_.create_mod_command();

    // if the tree is empty, set the root to cmd
    if (this->root_ == nullptr)
    {
        this->root_ = cmd;
    }
    else
    {
        // if the priority of the root is greater than or equal to cmd's priority
        if (this->root_->priority() >= cmd->priority())
        {
            // make cmd the new root and put everything else left to cmd.
            cmd->set_left(this->root_);
            this->root_ = cmd;
        }
        else
        {
            // if the root has a right child,
            if (this->root_->has_right())
            {
                // set the left of cmd to the roots right
                // the root's right is then set to cmd
                cmd->set_left(this->root_->right());
                this->root_->set_right(cmd);
            }
            else
            {
                // set the root's right to cmd
                this->root_->set_right(cmd);
            }
        }
    }
}

//
// get_root
//
Expr_Node * Expr_Tree_Builder::get_root (void)
{
    // return the root of the tree.
    return this->root_;
}