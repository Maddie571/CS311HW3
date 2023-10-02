// da3.cpp  SKELETON
// Glenn G. Chappell
// 2023-09-21
//
// For CS 311 Fall 2023
// Source for Assignment 3 functions

#include "da3.hpp"     // For Assignment 3 prototypes & templates

#include <functional>
using std::function;


void didItThrow(const function<void()> & ff,
                bool & threw)
{
    threw = false;
    try{
        ff();
    }
    catch(...){
        threw = true;
        throw;
    }
}


int gcd(int a,
        int b)
{
    if(a == 0) { //Rule 1
        return b;
    }
    if(a > b){ //Rule 2
        return gcd(b,a);
    }
    return gcd(b%a, a);  // Rule 3

}