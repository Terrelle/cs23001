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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(24);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 48);  //Will FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1267);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 1267);  //Will FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("126983233223");

        // Test 
        bi = bi.timesDigit(6);

        // Verify
        assert(bi == "761899399338");  //Will FAIL, fix and add test cases.
    }

     {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("999999999999999999999");

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  //Will FAIL, fix and add test cases.
    }


    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}

