//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Add_Command.h"

//
// ~Add_Command
//
Add_Command::~Add_Command (void)
{
    // no data members on heap
}

//
// set_priority
//
int Add_Command::priority (void)
{
    // return a priority of 1 fotr addition
    return 1;
}