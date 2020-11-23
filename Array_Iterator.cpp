//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================


//
// Array_Iterator
//
template <typename T>
Array_Iterator <T>::Array_Iterator (const Array <T> & array)
: array_ (array),
  current_pos_ (0)
{

}

//
// ~Array_Iterator
template <typename T>
Array_Iterator <T>::~Array_Iterator (void)
{
    // No members on the heap
}

//
// first
//
template <typename T>
void Array_Iterator <T>::first (void)
{
    // set the current position in the iterator to 0
    this->current_pos_ = 0;
}

//
// next
//
template <typename T>
void Array_Iterator <T>::next (void)
{
    // add 1 to the current position
    this->current_pos_ += 1;
}

//
// is_done
//
template <typename T>
bool Array_Iterator <T>::is_done (void) const
{   
    // return whether or not current position is greater than or equal to the size of the array.
    return this->current_pos_ >= this->array_.size();
}

//
// current_item
//
template <typename T>
const T & Array_Iterator <T>::current_item (void) const
{
    return this->array_[this->current_pos_];
}
