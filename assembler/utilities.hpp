#ifndef CS2_STACK_UTIL_HPP
#define CS2_STACK_UTIL_HPP
////////////////////////////////////////////////////////////////////////////
//
// File: utilities.hpp
//
// Programmer: Terrelle Tettey

#include <iostream>
#include <fstream>
#include "stack.hpp"
#include "../string/string.hpp"


String toPostFix(String);
String getOperator(const String&);
String intToString(int);
String PostToAssembly(String);
String EvFunc(String, String, String, String);

#endif
