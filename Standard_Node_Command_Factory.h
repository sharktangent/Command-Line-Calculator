//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _STANDARD_NODE_COMMAND_FACTORY_H_
#define _STANDARD_NODE_COMMAND_FACTORY_H_

#include "Node_Command_Factory.h"

class Standard_Node_Command_Factory : public Node_Command_Factory
{
public:
    /// Default Constructor
    Standard_Node_Command_Factory (void);
    
    ~Standard_Node_Command_Factory (void);

    Number_Node * create_number_command (int num) override;

    Add_Node * create_add_command (void) override;

    Subtract_Node * create_subtract_command (void) override;

    Mod_Node * create_mod_command (void) override;

    Multiply_Node * create_multiply_command (void) override;

    Divide_Node * create_divide_command (void) override;

};

#endif