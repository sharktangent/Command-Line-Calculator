//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Binary_Op_Node.h"

class Mod_Node : public Binary_Op_Node
{
public:
    Mod_Node (void);

    int eval (int n1, int n2) override;

    int priority (void) override;
};

#endif