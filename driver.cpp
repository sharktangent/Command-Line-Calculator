//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Calculator.h"
#include <iostream>

// forward declarations

// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.

// RESPONSE: Created a Caclulator class with slightly modified versions
// of the original C functions that I had. Removed the functions from the
// driver file.


//
// main
//
int main (int argc, char * argv [])
{
    bool running = true;
    Calculator calc;

    while (running)
    {
        // if get_input returns true, evaluate
        // otherwise set running to false
        if (calc.get_input())
        {
            try
            {
                // convert to infix, evaluate, and print
                calc.parse_expr();
                std::cout << calc.evaluate_expr() << std::endl;
            }
            catch (const std::invalid_argument & e)
            {
                // warn the user of an ivalid expression.
                std::cout << "Invalid Expression entered." << std::endl;
            }
            catch (const std::domain_error & e)
            {
                std::cout << "Calculation Error." << std::endl;
            }
        }
        else
        {
            running = false;
        }
    }
    
    return 0;
}