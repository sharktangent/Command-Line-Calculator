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

#include "Stack_Expr_Command_Factory.h"
#include "Array.h"
#include "Array_Iterator.h"
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

    /// Converts an infix expression to a postfix expression
    void infix_to_postfix (void);

    /// Evaluate the postfix expression and print the result
    void evaluate_postfix (void);

    /**
     * deletes all commands from postfix_ and resets its size
     * as if the destructor was called without actually 
     * destructing the calculator.
     */
    void reset_postfix (void);

        
private:

    /// Stack of ints to be passed to the command factory.
    Stack<int> int_stack_;

    /// Command Factory
    Stack_Expr_Command_Factory factory_;

    /// String that holds the infix expression
    std::string infix_;

    /// Array of Expr_Command pointers that holds the postfix expression.
    Array <Expr_Command *> postfix_;
};

#endif