//
//  IComparable.h
//  CSC502-Programming-Assignment3
//
//  Created by Andrew Smiley on 3/5/16.
//  Copyright © 2016 Andrew Smiley. All rights reserved.
//

#ifndef IComparable_h
#define IComparable_h
#define COMPARE_GREATER 1;
#define COMPARE_LESS -1;
#define COMPARE_EQUAL 0;
class IComparable
{
public:
//    virtual int  compare( const IComparable & icmp ) const =0 ;
    virtual void print( ostream & out= cout ) const =0 ;
    ￼
    ￼
    ￼virtual const IComparable & operator= (const IComparable & rhs) {
            return *this;   // dummy implementation
        ￼}

    
    ￼virtual int compare(const IComparable &comparable){
        //stub this out for now?
        //we should be able to use the subclass
        return 0;
    }
    ￼
    ￼/*
      I don't want them to override these operators
      */
    bool operator<  ( const IComparable & rhs ) const {
        //one liners for the win
            return compare(rhs) ==  COMPARE_LESS;
        ￼}
    // Implement this using compare()
    bool operator >   ( const IComparable & rhs ) const {
        //one liners for the win
        return compare(rhs) ==  COMPARE_GREATER;
        ￼}
    
    bool operator ==   ( const IComparable & rhs ) const {
        //one liners for the win
        return compare(rhs) ==  COMPARE_EQUAL;
        ￼}
    bool operator != (const IComparable & rhs) const{
        return compare(comparable) != COMPARE_EQUAL;
    }
    
    bool operator <= (const IComparable & rhs) const{
        return compare(comparable) == COMPARE_LESS || compare(comparable) == COMPARE_EQUAL;
    }
    bool operator >= (const IComparable & rhs) const{
        return compare(comparable) == COMPARE_GREATER || compare(comparable) == COMPARE_EQUAL;
    }
    
    ￼￼// Implement the remaining 5 relational operators
    
    ￼// (>, ==, !=, <=, and >=)  similarly
    ￼// using the compare member function
};

class Integer : IComparable{
public:
    //no arg constructor
    Integer (){
        this->inner = 0;
    }
    
    Integer (int intval){
        this->inner = intval;
    }
    
    const Integer & operator= (const Integer & rhs) {
        inner =rhs.getInner()
        return *this;   // dummy implementation
    }
    
    int getInner() const{
        return this->inner;
    }
    
    int compare(const Integer &comparable){
        
        //stub this out for now?
        //we should be able to use the subclass
        if (inner > comparable.getInner()){
            return COMPARE_GREATER;
        }
        if (inner < comparable.getInner()){
            return COMPARE_LESS;
        }
        if (inner == comparable.getInner()){
            return COMPARE_EQUAL;
        }
        //this could be more elegant
        return 0;
        
    }

    
    
    
    
private /*parts.... lol*/:
    int inner;
    
    
};

/*
 Couldn't we just override Integer..?
 */
class Character : IComparable{
public:
    Character(){
        inner = ''; //not sure what the value is for this guy...
    }
    Character(char characater){
        inner=characater;
    }
    
    
    const Character & operator= (const Character & rhs) {
        inner =rhs.getInner()
        return *this;   // dummy implementation
    }
    char getInner() const{
        return inner;
    }
    
    
    
    
private:
    char inner;
    
};
#endif /* IComparable_h */
