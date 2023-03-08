// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);
    }

   
    //Add test cases!!
    {
        // Setup
        bigint bi(683);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 683);  
        assert(digit == 3);
    }

    {
        // Setup
        bigint bi(862);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 862);  
        assert(digit == 2);
    }

    {
        // Setup
        bigint bi(68891);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 68891);  
        assert(digit == 1);
    }



    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

