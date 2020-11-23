// -*- C++ -*-
//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <exception>
#include "Array.h"

/**
 * @class Queue
 * 
 * Basic queue for arbitrary elements.
 */
template <typename T>
class Queue
{
public:
    /// Type definition of the type.
    typedef T type;

    /**
     * @class empty_exception
     * 
     * Exception thrown to indicate the queue is empty.
     */
    class empty_exception : public std::exception
    {
    public:
        /// Default Constructor
        empty_exception (void) 
            : std::exception () { }
    }; 

    /// Default Constructor
    Queue (void);

    /// Copy Constructor
    Queue (const Queue & q);

    /// Destructor
    ~Queue (void);

    const Queue & operator = (const Queue & rhs);

    /**
     * Insert a new \a element into the queue. The element is
     * inserted after all other elements in the list.
     * 
     * @param[in]       element     Element to be enqueued.
     */
    void enqueue (T element);

    /**
     * Get and remove the front element of the queue.
     * If there are no elements in the queue,
     * then a queue_empty_excpetion is thrown.
     * 
     * @return      Element in the front of the queue
     * @exception   empty_exception     The queue is empty.
     */
    T dequeue (void);

    /**
     * Test if the queue is empty.
     * 
     * @retval      true        The queue is empty.
     * @retval      false       The queue is not empty.
     */
    bool is_empty (void) const;

    /**
     * Number of elements in the queue.
     * 
     * @return      Size of the queue
     */
    size_t size (void) const;

    /// Remove all elements from the queue
    void clear (void);

    /**
     * Re-orders and shrinks the queue so that
     * the first element in the array is the front of
     * the queue and the last element of the array
     * is the back of the queue.
     */
    void restructure_queue (void);


private:
    // COMMENT There is no need to allocate the array on the heap. Always try to
    // allocate on the stack to reduce the complexity of your code.

    // RESPONSE Changed so that data is on the stack. Updated code to reflect this
    
    /// Array that holds the data of type T for the queue
    Array <T> data_;

    /// Index of the first element in the queue
    size_t front_;

    /// Index of the last element in the queue
    size_t back_;

    size_t size_;
};
// Include the inline files
#include "Queue.inl"

// Include the source file
#include "Queue.cpp"

#endif
