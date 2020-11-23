//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVIDE_NODE_H_
#define _DIVIDE_NODE_H_

#include "Binary_Op_Node.h"

class Divide_Node : public Binary_Op_Node
{
public:
    Divide_Node (void);

    int eval (int n1, int n2) override;

    int priority (void) override;
};

#endif