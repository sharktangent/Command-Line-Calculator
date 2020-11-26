//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Stack_Expr_Command_Factory.h"

//
//  Stack_Expr_Command_Factory
//
Stack_Expr_Command_Factory::Stack_Expr_Command_Factory (Stack <int> & stack)
: stack_ (stack)
{

}

//
//  ~Stack_Expr_Command_Factory
//
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory (void)
{
    // no members on heap
}

//
// create_number_command
//
Number_Command * Stack_Expr_Command_Factory::create_number_command (int num)
{
    return new Number_Command(this->stack_, num);
}

//
// create_add_command
//
Add_Command * Stack_Expr_Command_Factory::create_add_command (void)
{
    return new Add_Command(this->stack_);
}

//
// create_subtract_command
//
Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
{
    return new Subtract_Command(this->stack_);
}

//
// create_mod_command
//
Mod_Command * Stack_Expr_Command_Factory::create_mod_command (void)
{
    return new Mod_Command(this->stack_);
}

//
// create_multiply_command
//
Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command (void)
{
    return new Multiply_Command(this->stack_);
}

//
// create_divide_command
//
Divide_Command * Stack_Expr_Command_Factory::create_divide_command (void)
{
    return new Divide_Command(this->stack_);
}


