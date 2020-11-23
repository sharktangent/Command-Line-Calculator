//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ITERATOR_H_
#define _ITERATOR_H_

template <typename T>
class Iterator
{
public:

    /// Type definition of the element tyoe
    typedef T type;

    /// Virtual destructor
    virtual ~Iterator (void) = 0;

    /// Set position in iterator to first
    virtual void first (void) = 0;

    /// Shift the position in the iterator
    virtual void next (void) = 0;

    /**
     * Get whether the iterator is finished or not.
     * 
     * @retval      true        The iterator is finished.
     * @retval      false       The iterator is not finshed.
     */
    virtual bool is_done (void) const = 0;

    /**
     * Get the current iterator item
     * 
     * @return      The current item.
     */
    virtual const T & current_item (void) const = 0;
};

#include "Iterator.cpp"

#endif