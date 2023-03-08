//  String class test program
//
//  Tests: Ctor Char Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
        String one('X');

        assert(one == 'X');
    }

    {
        String one('M');

        assert(one == 'M');
    }

    {
        String one('k');
        String two('k');

        assert(one == two);
    }

    {
        String one("u");
        String two('u');

        assert(one == two);
    }

    
    
    std::cout << "Done testing Char Ctor." << std::endl;
}
