// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
    // Return the size of data
    return this->data_.size();
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
    // check if the stack is empty and throw an empty exception if it is
    if (this->is_empty())
    {
        throw empty_exception();
    }

    // return the last index of data
    return this->data_[this->data_.size() - 1];
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
    // return true if the size of data is 0
    return this->size() == 0;
}
