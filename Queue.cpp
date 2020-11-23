//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include <stdexcept>

//
// Queue
//
template <typename T>
Queue <T>::Queue (void)
: data_ (0),
  front_ (0),
  back_ (0),
  size_ (0)
{

}

//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & queue)
: data_ (0),
  front_ (0),
  back_ (0),
  size_ (0)
{
    // set the value of data to the value of queue's data.
    this->data_ = queue.data_;
    this->front_ = queue.front_;
    this->back_ = queue.back_;
    this->size_ = queue.size_;
}

//
// ~Queue
// 
template <typename T>
Queue <T>::~Queue (void)
{
    // No members on heap
}

//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{
    // Check to make sure this isn't a self assignment
    if (this != &rhs)
    {
        this->data_ = rhs.data_;
        this->front_ = rhs.front_;
        this->back_ = rhs.back_;
        this->size_ = rhs.size_;
    }
    // Return a reference to self
    return *this;
}

//
// enqueue
//
template <typename T>
void Queue <T>::enqueue (T element)
{
    // cases for enqueuing.
    if (this->data_.size() == 0 || (this->back_ == this->data_.size() - 1 && this->front_ == 0))
    {
        // expand size and set back to the end of data_
        this->data_.resize(this->data_.size() + 1);
        this->back_ = this->data_.size() - 1;
    }
    else if (this->back_ == this->data_.size() - 1 && this->front_ != 0)
    {
        // set back to first index in the queue
        this->back_ = 0;
    }
    else if (this->front_ == this->back_ + 1)
    {
        // increase the size of the array
        this->data_.resize(this->data_.size() + 1);

        //shift the portion of the array that needs to bee shifted
        for (int i = this->front_; i < this->data_.size() - 1; i++)
        {
            this->data_.set(i + 1, this->data_.get(i));
        }
        
        // increase both the front and the back
        this->front_ += 1;
        this->back_ += 1;
    }
    else
    {
        this->back_ += 1;
    }

    // insert the element into the back index
    this->data_.set(this->back_, element);
    this->size_ += 1;    
}

//
// dequeue
//
template <typename T>
T Queue <T>::dequeue (void)
{
    // Throw an empty_exception if the queue is empty
    if (this->is_empty())
    {
        throw empty_exception();
    }

    // Make an element of type T that gets the first index of data
    T element = this->data_.get(this->front_);

    // COMMENT This design is OK, but it is not the best design. This will be
    // a very expensive array to use if you are dequeing a lot of elements. This
    // is because you are copying N elements each time you dequeue 1 element.
    // Instead, you only want to copy element when necessary. Come up with a better
    // design that is not as expensive for the client to use.

    // RESPONSE Changed design to a looping queue design. Added front_ and back_ member variables
    // to determined the index of enqueueing and dequeueing. Added size_ member variable that is separate
    // from the Array's size to tell the number of elements that are in the queue.

    // return the front to index 0 if it is at the end of the array
    // otherwise increase it by 1.
    if (this->front_ == this->data_.size() - 1)
    {
        this->front_ = 0;
    }
    else
    {
        this->front_ += 1;
    }

    // decrease the size.
    this->size_ -= 1;

    
    
    // COMMENT There is no need to shrink the array after each
    // pop. If you want to allow clients to reclaim unused space,
    // you should expose a method that calls the shrink () method.
    
    // RESPONSE Removed shrink statement here. Added method called
    // restructure_queue that will put the queue's content's in order
    // if need be and shrinks the array.

    // return element
    return element;
}

//
// clear
// 
template <typename T>
void Queue <T>::clear (void)
{
    // COMMENT This works, but is a very expensive operation. You should find a
    // way to just reset the state without having to dequeue every element.
    
    // RESPONSE Changed so that data_ just gets resized to 0, and front and back
    // get set to 0. I also shrink the array here since there would be no reason to
    // not get rid of unused space if the user wants to clear the queue entirely.
    this->data_.resize(0);
    this->data_.shrink();
    this->front_ = 0;
    this->back_ = 0; 
    this->size_ = 0;
}

//
// restructure_queue
//
template <typename T>
void Queue <T>::restructure_queue (void)
{
    if (this->back_ > this->front_)
    {
        // turn data into a slice from front to back with back included.
        this->data_ = this->data_.slice(this->front_, this->back_ + 1);
        this->front_ = 0;
        this->back_ = this->data_.size() - 1;
        this->size_ = this->data_.size();
    }
    else if (this->back_ < this->front_)
    {
        // create a front and back slice, and combine them back into the original array
        Array <T> back_part = this->data_.slice(0, this->back_ + 1);
        Array <T> front_part = this->data_.slice(this->front_, this->data_.size() + 1);
        this->data_.resize(front_part.size() + back_part.size());

        // combine the front and back parts
        for (int i = 0; i < front_part.size(); i++)
        {
            this->data_.set(i, front_part.get(i));
        }

        for (int i = 0; i < back_part.size(); i++)
        {
            this->data_.set(i + front_part.size(), back_part.get(i));
        }

        // set member variables to appropriate states.
        this->front_ = 0;
        this->back_ = this->data_.size() - 1;
        this->size_ = this->data_.size();

        // shrink the array
        this->data_.shrink();
    }
    else
    {
        // front = back so just move everything to the first index, resize and shrink.
        this->data_.set(0, this->data_.get(this->front_));
        this->front_ = 0;
        this->back_ = 0;
        this->data_.resize(1);
        this->data_.shrink();
    }
}
