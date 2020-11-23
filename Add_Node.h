//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

#include "Binary_Op_Node.h"
#include "Add_Command.h"

class Add_Node : public Binary_Op_Node, public Add_Command
{
public:
    Add_Node (void);

    /**
     * Evaluate the sum of two numbers.
     * 
     * @param[in]       n1      First number in the operation
     * @param[in]       n2      Second number in the operation
     * @return          Sum of n1 and n2
     */
    int eval (int n1, int n2) override;
};

#endif