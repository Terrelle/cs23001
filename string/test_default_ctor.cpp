//  String class test program
//
//  Tests: Default Ctor Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
    String one;

    assert(one[0] == '\0');
    }

    std::cout << "Done testing default ctor" << std::endl;

}