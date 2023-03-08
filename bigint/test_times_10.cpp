// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);
        std::cout << bi << std::endl;

        // Verify
        assert(bi == 3);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 300);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(7);

        // Test 
        bi = bi.times10(5);

        // Verify
        assert(bi == 700000);  
    }
    
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

