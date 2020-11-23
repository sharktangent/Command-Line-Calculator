//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUBTRACT_NODE_H_
#define _SUBTRACT_NODE_H

#include "Binary_Op_Node.h"

class Subtract_Node : public Binary_Op_Node
{
public:
    Subtract_Node (void);

    int eval (int n1, int n2) override;

    int priority (void) override;

};

#endif