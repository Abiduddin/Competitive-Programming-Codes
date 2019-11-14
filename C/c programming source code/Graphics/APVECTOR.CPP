//****************************************************************
//
//  apvector class  implementation -- continuation of apvector.h
//
//****************************************************************

#include <iostream.h>
#include <stdlib.h>
#include <assert.h>

//****************************************************************
//********           Constructors / destructor         ***********
//****************************************************************

template <class itemType>
apvector<itemType>::apvector()

// Constructor: builds an empty vector of size 0.

    : mSize(0), mList(0)      
{}

//****************************************************************

template <class itemType>
apvector<itemType>::apvector(int size)

// Constructor: builds a vector of a given size.
// size must be >= 0.

   : mSize(size), mList(new itemType[size])
{}

//****************************************************************

template <class itemType>
apvector<itemType>::apvector(int size, const itemType &fillValue)

// Constructor: builds a vector of a given size with all elements
//   set to fillValue.
// size must be >= 0.

    : mSize(size), mList(new itemType[size])
{
    int k;

    for (k = 0;   k < size;   k++)
        mList[k] = fillValue;
}

//****************************************************************

template <class itemType>
apvector<itemType>::apvector(const apvector<itemType> &v)

// Copy constructor: builds a vector equal to a given vector v.

    : mSize(v.length()), mList(new itemType[mSize])
{
    int k;

    for (k = 0;   k < mSize;   k++)
        mList[k] = v.mList[k];
}

//****************************************************************

template <class itemType>
apvector<itemType>::~apvector ()

// Destructor.

{
    delete [] mList;
}

//****************************************************************
//********                 Assignment                  ***********
//****************************************************************

template <class itemType>
const apvector<itemType> &
apvector<itemType>::operator= (const apvector<itemType> &v)

// Assignment operator.  Resizes the vector and copies elements
//   from v to the vector.

{
    if (this != &v) {          // Avoid assignment to itself
        delete [] mList;
        mSize = v.mSize;
        mList = new itemType[mSize];

        int k;

        for (k = 0;   k < mSize;   k++)
            mList[k] = v.mList[k];
    }
    return *this;              // Return a reference to itself to support
                               //   chained assignments a = b = c
}

//****************************************************************
//********                  Subscripting               ***********
//****************************************************************

template <class itemType>
itemType &apvector<itemType>::operator[] (int k)

// Overloaded subscript operator.  Verifies that 0 <= k <= mSize - 1.

{
    if (k < 0 || k >= mSize) {
        cerr << "Illegal vector index: " << k << " max index = "
             << (mSize-1) << endl;
        abort();
    }
    return mList[k]; 
}

//****************************************************************

template <class itemType>
const itemType &apvector<itemType>::operator[] (int k) const

// Overloaded subscript operator for const (read-only) vectors.
// Verifies that 0 <= k <= mSize - 1.

{
    if (k < 0 || k >= mSize) {
        cerr << "Illegal vector index: " << k << " max index = "
             << (mSize-1) << endl;
        abort();
    }
    return mList[k]; 
}

//****************************************************************
//********           length() and resize(...)          ***********
//****************************************************************

template <class itemType>
int apvector<itemType>::length() const

// Returns the current size (number of elements) in the vector.

{
    return mSize; 
}

template <class itemType>
void apvector<itemType>::resize(int newSize)

// Resizes the vector to a specified size newSize.
//   The tail of the vector may be chopped off and the values lost
//   if newSize is less than the current size.
//   Other elements remain unchanged.

{
    int k;
    int numToCopy = newSize;

    if (numToCopy > mSize)
          numToCopy = mSize;

    itemType *newList = new itemType[newSize];
    for (k = 0;   k < numToCopy;   k++)
        newList[k] = mList[k];

    delete [] mList;
    mSize = newSize;
    mList = newList;
}

//****************************************************************


