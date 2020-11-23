//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#include <stdexcept>        // for std::out_of_range exception
#include <iostream>

//
// Array_Base
// Set data_ to nullptr and size to 0
template <typename T>
Array_Base <T>::Array_Base (void)
: data_ (nullptr),
  cur_size_ (0)
{

}

//
// Array_Base (size_t)
// Allocate data_ to a T array of size length and set size to length
template <typename T>
Array_Base <T>::Array_Base (size_t length)
: data_ (new T[length]),
  cur_size_ (length)
{

}

//
// Array_Base (size_t, T)
// Allocate data_ to a t array of size length and set size to length
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill)
: data_ (new T[length]),
  cur_size_ (length)
{
    // fill the array
    for (int i = 0; i < this->size(); i++)
    {
        this->data_[i] = fill;
    }
}

//
// Array_Base (const Array &)
// data_ gets a T array the size of the copied array, and size gets the size of the copied array
template <typename T>
Array_Base <T>::Array_Base (const Array_Base & array)
: data_ (new T[array.max_size()]),
  cur_size_ (array.size())
{
    // Set data in the copy to the same as the data in the original
    for (int i = 0; i < this->size(); i++)
    {
        this->data_[i] = array[i];
    }
}

//
// ~Array_Base
//
template <typename T>
Array_Base <T>::~Array_Base (void)
{
    delete[] this->data_;
}

//
// operator =
//
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = (const Array_Base & rhs)
{
    // Make sure objects aren't the same
    if (this != &rhs)
    {
        // Delete data_ and reallocate it as a new T array
        delete[] this->data_;
        this->data_ = new T[rhs.size()];
        this->cur_size_ = rhs.size();

        // Set accessible data members to accessible data members in rhs
        for (int i = 0; i < this->size(); i++)
        {
            this->data_[i] = rhs[i];
        }
    }

    // Return a reference to self
    return *this;
}

//
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index)
{
    // Throw out of range exception if index is greater than or equal to size
    if (index >= this->size())
    {
        throw std::out_of_range("Index out of range.");
    }

    return this->data_[index];
}

//
// operator []
//
template <typename T>
const T & Array_Base <T>::operator [] (size_t index) const
{
    // Throw an out of range exception if index is greater than or equal to size
    if (index >= this->size())
    {
        throw std::out_of_range("Index out of range.");
    }

    return this->data_[index];
}

//
// get
//
template <typename T>
T Array_Base <T>::get (size_t index) const
{
    // Throw an out of range exception if index is greater than or equal to size
    if (index >= this->size())
    {
        throw std::out_of_range("Index out of range.");
    }

    return this->data_[index];
}

//
// set
//
template <typename T>
void Array_Base <T>::set (size_t index, T value)
{
    // Throw an index out of range exception if inex is greater than or equal to size
    if (index >= this->size())
    {
        throw std::out_of_range("Index out of range.");
    }

    this->data_[index] = value;
}

//
// find (T)
//
template <typename T>
int Array_Base <T>::find (T element) const
{
    // Loop through the array to find the specified value
    // Return the iteration number if the value is found
    for (int i = 0; i < this->size(); i++)
    {
        if (this->data_[i] == element)
        {
            return i;
        }
    }

    // Value not found
    return -1;
}

//
// find (T, size_t)
//
template <typename T>
int Array_Base <T>::find (T element, size_t start) const
{
    // Throw out of range exception if start is greater than or equal to size
    if (start >= this->size())
    {
        throw std::out_of_range("Index our of range.");
    }

    // Loop through the array to find the specified value
    // Return the iteration number if the value is found
    for (int i = start; i < this->size(); i++)
    {
        if (this->data_[i] == element)
        {
            return i;
        }
    }

    // Value not found
    return -1;
}

//
// operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const
{
    // Check for self comparison
    // return true if addresses are equal
    if (this == &rhs)
    {
        return true;
    }

    // Check if the size of self and rhs are equal if not, return false
    if (this->size() == rhs.size())
    {
        // Loop and return false if there are inequalities in data members
        for (int i = 0; i < this->size(); i++)
        {
            if (this->data_[i] != rhs[i])
            {
                return false;
            }
        }

        // Return true once the loop has finished meaning no inequalities were found
        return true;
    }
    else
    {
        return false;
    }

}

//
// operator !=
//
template <typename T>
bool Array_Base <T>::operator != (const Array_Base & rhs) const
{
    // Check operator == and return the opposite of what it returns
    if (*this == rhs)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill (T element)
{
    // Apply value to every accessible spot in data
    for (int i = 0; i < this->size(); i++)
    {
        this->data_[i] = element;
    }
}

//
// reverse
//
template <typename T>
void Array_Base <T>::reverse (void)
{
    // Instantiate a temporary T used to switch array positions
    T temp;

    // loop through half the array and put current index into a temp
    // put the mirror position of current index into current index
    // put temp into mirror position of current index
    for (int i = 0; i < this->size() / 2; i++)
    {
        temp = this->data_[i];
        this->data_[i] = this->data_[this->size() - (i + 1)];
        this->data_[this->size() - (i + 1)] = temp;
    }
}

//
// slice (size_t begin)
//
template <typename T>
Array_Base <T> Array_Base <T>::slice (size_t begin) const
{
    // Make sure indexes have been entered correctly
    if (begin >= this->size())
    {
        throw std::out_of_range("Index out of range.");
    }

    // create an array of type T with the corect sliced size
    Array_Base<T> sliced(this->size() - 1 - begin);

    // give every value in sliced the correct value from data_
    for (int i = 0; i < sliced.size(); i++)
    {
        sliced[i] = this->data_[begin + i];
    }
    
    return sliced;
}

//
// slice (size_t begin, size_t end)
//
template <typename T>
Array_Base <T> Array_Base <T>::slice (size_t begin, size_t end) const
{
    // Make sure indexes have been entered correctly
    if ((begin >= end) || (end > this->size()))
    {
        throw std::out_of_range("Index out of range.");
    }

    // Create an array of type T with the correct sliced size
    Array_Base<T> sliced(end - begin);

    // Give every value in sliced the correct value from data_
    for (int i = 0; i < sliced.size(); i++)
    {
        sliced[i] = this->data_[begin + i];
    }

    return sliced;
}