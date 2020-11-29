//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Expr_Tree_Builder.h"
#include "Array.h"
#include "Array_Iterator.h"
#include "Eval_Expr_Tree.h"
#include <iostream>
#include <string>
#include <sstream>
#include <memory>

class Calculator
{
public:

    /// default constructor
    Calculator (void);

    /// Destructor
    ~Calculator (void);

    /**
     * Gets user input and inserts it into infix
     * 
     * @retval      True    User does not input QUIT
     * @retval      False   User inputs QUIT
     */
    bool get_input (void);

    /// Sets the input of the calculator
    void set_input (std::string input);

    /// Parse the expression and
    void parse_expr (void);

    /// Evaluate the expression and print the result
    int evaluate_expr (void);

    /// Gets the infix expression.
    std::string get_infix (void);

        
private:
    /// String that holds the infix expression
    std::string infix_;
    Expr_Tree_Builder builder_;
};

#endif