// object_test.cpp
// 
// Terrelle Tettey on 10/13/21.


#include "object_construction.hpp"

void copyCtorTest(Object);

int main(){
// For Default Ctor
    Object a;
    Object b;
    Object c;

// For Assignment Operator testing
    a = b;
    b = c;



// For Copy Ctor

    copyCtorTest(a);
    copyCtorTest(b);
    copyCtorTest(c);

}

void copyCtorTest(Object t){

}