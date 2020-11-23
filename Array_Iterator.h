//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include "Iterator.h"
#include "Array.h"

/**
 * @class Array_Iterator
 * 
 * An iterator that works with Array_Base,
 * Array, and Fixed_Array.
 */
template <typename T>
class Array_Iterator : public Iterator <T>
{
public:
    /// Type definition of the element type.
    typedef T type;

    /// Initialization constructor
    Array_Iterator (const Array <T> & array);

    ~Array_Iterator (void);

    /// Set iterator to the first element of the array
    virtual void first (void) override;

    /// Shift iterator to the next element of the array
    virtual void next (void) override;

    /**
     * Get whether or not the iterator is finished
     * 
     * @retval      true        Iterator is finished
     * @retval      false       Iterator is not finished
     */
    virtual bool is_done (void) const override;
    
    /**
     * Get the current item in the Array.
     * 
     * @return      The current item.
     */
    virtual const T & current_item (void) const override;


private:
    /// Array to be iterated over.
    const Array <T> array_;

    /// Current position of the iterator.
    size_t current_pos_;
};

#include "Array_Iterator.cpp"

#endif