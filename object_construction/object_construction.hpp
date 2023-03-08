// object_construction.hpp
// 
// Terrelle Tettey on 10/13/21.

#include <iostream>

#ifndef object_construction_hpp
#define object_construction_hpp

class Object{
public: 
    Object(); // Default Ctor
    Object(const Object&); // Copy Constructor
    ~Object(); // Destructor
    Object operator=(const Object&); // Assignment

private:

};


#endif