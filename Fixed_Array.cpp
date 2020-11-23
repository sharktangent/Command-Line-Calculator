// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
: Array_Base <T> (N)
{

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
: Array_Base <T> (N)
{
    // put everything in arr into self
	for (int i = 0; i < this->size(); i++)
    {
        this->data_[i] = arr[i];
    }
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
: Array_Base <T> (N)
{
    // set every index to fill
    for (int i = 0; i < this->size(); i++)
    {
        this->data_[i] = fill;
    }
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
    // No dynamically allocated members in this class
    // data_ will be deleted in base class
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
    // Make sure addresses aren't the same
	if (this != &rhs)
    {
        // Data does not need to be deleted since the array can't be resized
        // Just put everything that is in rhs into this
        for (int i = 0; i < rhs.size(); i++)
        {
            this->data_[i] = rhs[i];
        }
    }
    
    // Return a reference to self
    return *this;
}
