//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Expr_Command_Factory.h"

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:
    Stack_Expr_Command_Factory (Stack <int> & stack);

    ~Stack_Expr_Command_Factory (void);

    Number_Command * create_number_command (int num) override;

    Add_Command * create_add_command (void) override;

    Subtract_Command * create_subtract_command (void) override;

    Mod_Command * create_mod_command (void) override;

    Multiply_Command * create_multiply_command (void) override;

    Divide_Command * create_divide_command (void) override;

private:
    Stack <int> & stack_;
};