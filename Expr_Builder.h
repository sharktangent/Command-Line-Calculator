//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

class Expr_Builder
{
public:
    /// Default Constructor
    Expr_Builder (void);

    /// Destructor
    virtual ~Expr_Builder (void) = 0;

    virtual void start_expression (void) = 0;

    virtual void build_number (int n) = 0;

    virtual void build_add_op (void) = 0;

    virtual void build_subtract_op (void) = 0;

    virtual void build_multiply_op (void) = 0;

    virtual void build_divide_op (void) = 0;

    virtual void build_mod_op (void) = 0;
};

#endif