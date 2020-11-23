// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//
// Array
// call base constructor and max_size gets 0
template <typename T>
Array <T>::Array (void)
: Array_Base <T> (),
  max_size_ (0)
{

}

//
// Array (size_t)
// call base constructor with length and max_size_ gets length
template <typename T>
Array <T>::Array (size_t length)
: Array_Base <T> (length),
  max_size_ (length)
{

}

//
// Array (size_t, T)
// call base constructor with length and max_size_ gets length
template <typename T>
Array <T>::Array (size_t length, T fill)
: Array_Base <T> (length),
  max_size_ (length)
{
  // set every index of data to fill 
  for (int i = 0; i < this->size(); i++)
  {
      this->data_[i] = fill;
  }
}

//
// Array (const Array &)
// call base constructor with the size of the original array, max_size_ gets the max size of the original array
template <typename T>
Array <T>::Array (const Array & array)
: Array_Base <T> (array.size()),
  max_size_ (array.max_size())
{
  // Set current data in the copy to be the same as current data in the original
  // Data past the current size can't be copied since it isn't accessible in the original
  for (int i = 0; i < this->size(); i++)
  {
    this->data_[i] = array[i];
  }   
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
  // No Dynamically allocated members in class
  // data_ will be deleted in base class.
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
  // Make sure objects aren't the same
  if (this != &rhs)
  {
    // Delete data_ and reallocate it as a new T array
    delete[] this->data_;
    this->data_ = new T[rhs.size()];
    this->cur_size_ = rhs.size();
    this->max_size_ = rhs.max_size();

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
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  // Check 4 scenarios:
  // Scenario 1: new size is less than original size
  // Scenario 2: new size is greater than original max size
  // Scenario 3: new size is greather than original size but less than max size
  // Scenario 4: new size is the same as the original size 

  //Scenario 1
  if (new_size < this->size())
  {
    // Update the current size to new size
    // Makes current size smaller
    this->cur_size_ = new_size;
  }
  else if (new_size > this->size())
  {
    //Scenario 2
    if (new_size > this->max_size())
    {
      // Declare a temporary data array to put everything from original array into
      // Leave new open spots in array unoccupied
      T * new_data = new T[new_size];
      for (int i = 0; i < this->max_size(); i++)
      {
        new_data[i] = this->data_[i];
      }

      // Delete original data and set it to new_data
      // Update the current and max size to the new size
      // Update new_data's pointer to be nullptr
      delete[] this->data_;
      this->data_ = new_data;
      this->cur_size_ = new_size;
      this->max_size_ = new_size;
      new_data = nullptr;
    } // Scenario 3
    else 
    {
      // Update the current size to new size
      // makes current size larger
      this->cur_size_ = new_size;
    }
  } // Scenario 4
  else
  {
    std::cout << "";
  }

}

//
// shrink
//
template <typename T>
void Array <T>::shrink (void)
{
  // Check if the array needs to be shrunk before proceeding
  if (this->max_size() > this->size())
  {
    // Apply all current accessible data to a temp array
    T * temp = new T[this->size()];
    for (int i = 0; i < this->size(); i++)
    {
      temp[i] = this->data_[i];
    }

    // Delete data then set data to temp
    // Set the max size to the current size and set temp to nullptr
    delete[] this->data_;
    this->data_ = temp;
    this->max_size_ = this->size();
    temp = nullptr;
  }
}