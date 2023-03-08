// Terrelle Tettey
// String Implementation
// CS23001


#include <iostream>
#include "string.hpp"

int String::capacity() const{
   return stringSize-1;
}

int String::length() const{
    int result = 0;

    while(str[result] != '\0') ++result;

    return result;
}

/*
String::String(){
    stringSize = 1;
    str = new char[stringSize];
    int i = 0;

    str[i] = '\0';
}
*/



// DEFAULT CTOR
String::String(){

    stringSize = 1;

    str = new char[stringSize-1];

    str[0] = '\0';
}


String::String(char ch): String(){	
       
   if(ch != '\0'){
       stringSize = 2;
       str = new char[stringSize-1];

       str[0] = ch;
       str[1] = '\0';
   } else {
       str[0] = '\0';
   }

}

String::String(const char str1[]){
    int i = 0;
    while(str1[i] != '\0') ++i;
    
    stringSize = i + 1;
    str = new char[stringSize];
    
    i = 0;
    while(str1[i] != '\0'){
        if(i >= capacity()) { break; } // if it exceeds capacity break
        str[i] = str1[i];
        ++i;
    }
    str[i] = '\0'; 
}

/*
void String::swap(String& rhs){
    char *temPtr = rhs.ptr;
    rhs.ptr      = ptr;
    ptr          = temPtr;

    int temp     = rhs.capacity;
    rhs.capacity = capacity;
    capacity     = temp;
}

*/
void String::swap(String& rhs){
    // take a temp of both stringSize and str and swap

    int tempSize = rhs.stringSize;
    rhs.stringSize = stringSize;
    stringSize = tempSize;

    char *tempStr = rhs.str;
    rhs.str = str;
    str = tempStr;
}

/*
    String& String::operator=(String rhs){
        swap(rhs);
        return *this;
    }
*/

String& String::operator=(String rhs){
    swap(rhs);
    return *this;
}
/*
String::~String(){
    delete[] str;
}

*/
String::~String(){
    if(str != NULL)
    delete[] str;
}

/*
String::String(const String& actual){
    stringSize = actual.stringSize;
    ptr = new char[stringSize];
    int i;

    for(i = 0; i < capacity; ++i){
        ptr[i] = actual.ptr[i];
    }

    ptr[i] = '\0';
}
*/


// COPY CONSTRUCTOR
String::String(const String& rhs){
    stringSize = rhs.stringSize;
    str = new char[stringSize];
    int i;
    

    for(i = 0; i < capacity(); ++i){
        str[i] = rhs.str[i];
    }
    str[i] = '\0';
}

String& String::operator+=(const String& rhs) {
    int len = length();
    int i = 0;
    stringSize = length() + rhs.length() + 1;

    char *temPtr = str;
    str = new char[stringSize];

    for(i; i < length(); ++i){
        str[i] = temPtr[i];
    }

    for (i = length(); i < stringSize; ++i){
        str[i] = rhs.str[i-len];
    }

    str[stringSize-1] = '\0';

    return *this;
}

/*
String a = "124df4";
String b = "909090";

String result = a + b;
assert(result == "124df4909090");
*/





/*
String& String::operator+=(const String& rhs){ 
   int i;
   int len = length();
   stringSize = length() + rhs.length() + 1;

   char *temPtr = str;
   str = new char[stringSize];

   for(i = 0; i < len; ++i){ str[i] = temPtr[i]; }

   for(i = len; i < stringSize; ++i) { str[i] = rhs.str[i-len]; }

   str[stringSize-1] = '\0';
   return *this;
}
*/
String operator+(String lhs, const String& rhs){
    String result;
    result = lhs;

    result += rhs; 

    return result;
}

String String::substr(int start, int end) const {
    String result;
    int i;
    result.stringSize = end - start + 2;
    result.str = new char[result.stringSize];

    for(i = start; i <= end; ++i){
        result[i-start] = str[i];
    }
    result[i-start] = '\0';
    return result;
}

String String::substr(int start, int end) const{
   String result;
   int i = 0;

   result.stringSize = end - start + 2;
   result.str = new char[result.stringSize];

   for(i = start; i <= end; ++i){
       result[i-start] = str[i];
   }

   result[i-start] = '\0';
   return result;

}




std::vector<String> String::split(char ch) const{
   int start = 0;
   int len = length();
   int end = 0;

   std::vector<String> result;

   while(end != -1){
       end = findch(start, ch);

       if(start == end)
       result.push_back("");

       else if(end != -1)
       result.push_back(substr(start, end-1));

       if(end == -1)
       result.push_back(substr(start, len));

       start = end + 1;
   }
   return result;
} 

char String::operator[](int x) const{
    return str[x];
}

char& String::operator[](int x) {
    return str[x];
}

/*
bool String::operator==(const String& rhs){
    int i = 0;
    while(s[i] != '\0' && str[i] == rhs.s[i]){
        ++i;
    }
    return s[i] == rhs.s[i];
}

*/

bool String::operator==(const String& rhs)const{
    int x = 0;

    while(str[x] != 0 && str[x] == rhs.str[x]) ++x;
    return str[x] == rhs.str[x];
}


String operator+(char lhs, const String& rhs){
    return String(lhs) + rhs;
}




int String::findch(int start, char ch) const{

    for(int i = start; i <= length(); ++i){
        if(ch == str[i]) return i;
    } 
    return -1;
}

int String::findstr(int start, const String& rhs) const{

   for(int i = start; i <= length(); ++i){
       if(rhs == substr(i, rhs.length()-1+i)) return i;
   }
   return -1;
}


std::istream& operator>>(std::istream& in, String& rhs){
    in >> rhs.str;
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs){
    out << rhs.str;
    return out;
}

bool String::operator<(const String& rhs) const{
    int i = 0;
    while (str[i] != 0 && rhs.str[i] != 0 && str[i] == rhs.str[i]) ++i;
    return str[i] < rhs.str[i];
}

bool operator==(const char lhs[],  const String& rhs){ return String(lhs) == rhs; }

bool operator==(char lhs, const String& rhs){ return String(lhs) == rhs; }

bool operator< (const char lhs[],  const String& rhs){ return String(lhs) < rhs; }

bool operator< (char lhs, const String& rhs) { return String(lhs) < rhs; }

bool operator<=(const String& lhs, const String& rhs){ return (lhs < rhs || lhs == rhs); }

bool operator!= (const String& lhs, const String& rhs){ return !(lhs == rhs); }

bool operator>=(const String& lhs, const String& rhs){ return (lhs > rhs || lhs == rhs); }

bool operator>(const String& lhs, const String& rhs){ return lhs > rhs; }


