//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Expr_Node_Visitor.h"

class Expr_Node
{   
public:
    /// Destructor
    virtual ~Expr_Node (void) = 0;

    virtual void accept (Expr_Node_Visitor & v) = 0;

    virtual int priority (void) = 0;

    virtual Expr_Node * right (void) = 0;

    virtual Expr_Node * left (void) = 0;

    virtual bool has_right (void) = 0;

    virtual bool has_left (void) = 0;

    virtual void set_right (Expr_Node * node) = 0;

    virtual void set_left (Expr_Node * node) = 0;

protected:
    /// Default Constructor
    Expr_Node (void);
};

#endif