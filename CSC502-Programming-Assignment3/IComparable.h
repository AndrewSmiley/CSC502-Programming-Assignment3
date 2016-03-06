//
//  IComparable.h
//  CSC502-Programming-Assignment3
//
//  Created by Andrew Smiley on 3/5/16.
//  Copyright © 2016 Andrew Smiley. All rights reserved.
//

#ifndef IComparable_h
#define IComparable_h

class IComparable
{
public:
    virtual int  compare( const IComparable & icmp ) const =0 ;
    virtual void print( ostream & out= cout ) const =0 ;
    ￼
    ￼
    ￼virtual const IComparable & operator= (const IComparable & rhs) {
        ￼}
    return *this;   // dummy implementation
    ￼
    ￼virtual bool operator<  ( const IComparable & rhs ) const {
        ￼}
    // Implement this using compare()
    ￼￼// Implement the remaining 5 relational operators
    ￼// (>, ==, !=, <=, and >=)  similarly
    ￼// using the compare member function
};
#endif /* IComparable_h */
