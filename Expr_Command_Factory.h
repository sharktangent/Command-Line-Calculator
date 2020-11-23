//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Mod_Command.h"
//#include "Open_Par_Command.h"
//#include "Closed_Par_Command.h"

class Expr_Command_Factory
{
public:
    virtual ~Expr_Command_Factory (void) = 0;

    virtual Number_Command * create_number_command (int num) = 0;

    virtual Add_Command * create_add_command (void) = 0;

    virtual Subtract_Command * create_subtract_command (void) = 0;

    virtual Mod_Command * create_mod_command (void) = 0;

    virtual Multiply_Command * create_multiply_command (void) = 0;

    virtual Divide_Command * create_divide_command (void) = 0;

protected:
    /// Default Constructor
    Expr_Command_Factory ();

private:
    // prevent copy and assignment operations.
    Expr_Command_Factory (const Expr_Command_Factory &);
    const Expr_Command_Factory & operator = (const Expr_Command_Factory &);

};

#endif