//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Standard_Node_Command_Factory.h"

//
// Standard_Node_Command_Factory
//
Standard_Node_Command_Factory::Standard_Node_Command_Factory (void)
{

}

//
// ~Standard_Node_Command_Factory
//
Standard_Node_Command_Factory::~Standard_Node_Command_Factory (void)
{
    // No members on heap
}

//
// create_number_command
//
Number_Node * Standard_Node_Command_Factory::create_number_command (int num)
{
    return new Number_Node(num);
}

//
// create_add_command
//
Add_Node * Standard_Node_Command_Factory::create_add_command (void)
{
    return new Add_Node();
}

//
// create_subtract_command
//
Subtract_Node * Standard_Node_Command_Factory::create_subtract_command (void)
{
    return new Subtract_Node();
}

//
// create_mod_command
//
Mod_Node * Standard_Node_Command_Factory::create_mod_command (void)
{
    return new Mod_Node();
}

//
// create_multiply_command
//
Multiply_Node * Standard_Node_Command_Factory::create_multiply_command (void)
{
    return new Multiply_Node();
}

//
// create_divide_command
//
Divide_Node * Standard_Node_Command_Factory::create_divide_command (void)
{
    return new Divide_Node();
}
