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
#include "Mod_Command.h"

class Mod_Node : public Binary_Op_Node
{
public:

    // Default Constructor
    Mod_Node (void);

    /// Destructor
    ~Mod_Node (void);
    
    /**
     * Get the modulus of two numbers.
     * 
     * @param[in]       n1      Dividend.
     * @param[in]       n2      Divisor.
     * @return          Modulus of n1 and n2.
     */  
    int eval (int n1, int n2) override;

    /// Accept the visitor to this node.
    void accept (Expr_Node_Visitor & v) override;

    /// Get the priority of the command
    int priority (void) override;
};

#endif