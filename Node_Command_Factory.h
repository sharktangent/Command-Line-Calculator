//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NODE_EXPR_COMMAND_FACTORY_H_
#define _NODE_EXPR_COMMAND_FACTORY_H_

#include "Expr_Node.h"
#include "Binary_Op_Node.h"
#include "Number_Node.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Mod_Node.h"
#include "Multiply_Node.h"
#include "Divide_Node.h"

class Node_Command_Factory
{
public:
    /// Default Constructor
    Node_Command_Factory (void);

    /// Destructor
    virtual ~Node_Command_Factory (void) = 0;

    virtual Number_Node * create_number_command (int num) = 0;

    virtual Add_Node * create_add_command (void) = 0;

    virtual Subtract_Node * create_subtract_command (void) = 0;

    virtual Mod_Node * create_mod_command (void) = 0;

    virtual Multiply_Node * create_multiply_command (void) = 0;

    virtual Divide_Node * create_divide_command (void) = 0;
};

#endif