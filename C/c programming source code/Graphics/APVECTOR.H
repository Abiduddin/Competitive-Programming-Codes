#ifndef _APVECTOR_H
#define _APVECTOR_H

//****************************************************************
//
// apvector class template
//
// Implements dynamically-allocated 1-D arrays
//   with subscript range checking.
//
// The template data type parameter itemType must be either a built-in
//   type or support a default constructor and assignment.
//
//****************************************************************

// If your compiler supports the keyword "explicit," comment out the
// "#define explicit" line below.  Leaving the #define redefines explicit
// as empty space, so it will be ignored.
//
//   "explicit" disallows an erroneous implicit type-conversion:
//   vector<int> v(10);
//   v = 0; // Oops!! Allowed because of implicit type conversion.

#define explicit

template <class itemType> 
class apvector {

  public:
  
  // Constructors/destructor:

    apvector();           // Default constructor: builds an
                          //   empty vector of size 0

    explicit apvector(int size);
	                      // Builds a vector of a given size

    apvector(int size, const itemType &fillValue);
                          // Builds a vector of a given size and sets
                          //   all its elements to fillValue

    apvector(const apvector &vec);
                          // Copy constructor: builds a vector equal to
                          //  a given vector

    ~apvector();          // Destructor
    
  // Assignment:

    const apvector &operator= (const apvector &vec);

  // Overloaded subscripting operators (perform subscript range checking):

    itemType &operator[] (int k);
    const itemType &operator[] (int k) const;

  // length() and resize(...) member functions:

    int  length() const;   // Returns the current size of the vector

    void resize(int newSize);
                           // Changes the size to a specified new size
                           //   (can result in losing values if the tail
                           //    is chopped off)

  private:
                                                
    int mSize;             // Number of elements in the vector.
    itemType *mList;       // Pointer to the array buffer.
};

#include "apvector.cpp"
// Continued in apvector.cpp...

#endif // _APVECTOR_H


