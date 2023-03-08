//  String class test program
//
//  Tests: Find Char Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
        String one = "hejbc2ejc1ej";

        int result = one.findch(0, 'b');

        std::cout << "Found character here: " << result << std::endl;

        assert(result == 3);
    }

    {
        String one = "hmjbo2easc1rq";
        char a = 'j';

        int result = one.findch(0, a);

        std::cout << "Found character here: " << result << std::endl;

        assert(result == 2);
    }

    {
        String one = "hmjbo2easc1rq";

        int result = one.findch(0, 'o');

        std::cout << "Found character here: " << result << std::endl;

        assert(result == 4);
    }

    {
        String one = "qsdfhbvmjuoptla";
        
        int result = one.findch(0, 'x');

        std::cout << "Found character here: " << result << std::endl;

        assert(result == -1);
    }

    {
        String one = "12345bcdefgh";
        
        int result = one.findch(0, '5');

        std::cout << "Found character here: " << result << std::endl;

        assert(result == 4);
    }
    
    std::cout << "Done Testing find character" << std::endl;


}