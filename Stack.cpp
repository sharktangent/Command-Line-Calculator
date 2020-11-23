// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
: data_ (0)
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
: data_ (0)
{
    // set self data to stack's data
    this->data_ = stack.data_;
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
    // No data members on heap
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
    // resize to one more than current size, then insert element at the end of data
    this->data_.resize(this->data_.size() + 1);
    this->data_.set(this->data_.size() - 1, element);
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    // resize to one less than current size, then shrink data
    if (this->is_empty())
    {
        throw empty_exception();
    }
    this->data_.resize(this->data_.size() - 1);
    
    // COMMENT There is no need to shrink the array after each
    // pop. If you want to allow clients to reclaim unused space,
    // you should expose a method that calls the shrink () method.

    // RESPONSE Removed shrink statement here and gave stack its own
    // shrink method that the user can call.
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    // check to make sure not self assignment
    if (this != &rhs)
    {
        // set self data to rhs data
        this->data_ = rhs.data_;
    }
    
    //return a reference self
    return *this;
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    // COMMENT Just reset the variables instead popping each element, which
    // is expensive.

    // RESPONSE Changed so that data_'s size gets set to 0 and shrunk, since
    // it makes sense to get rid of unused data when clearing.
    
    this->data_.resize(0);
    this->data_.shrink();
}

//
// shrink
//
template <typename T>
void Stack <T>::shrink (void)
{
    // shrink the data_ array
    this->data_.shrink();
}
