//  Stack class test program
//
//  Tests: Default Constructor Test
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp" 

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  a;

        // VERIFY
        assert(a.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  b;

        // VERIFY
        assert(b.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;

        // VERIFY
        assert(x.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> x;

        // VERIFY
        assert(x.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> y;

        // VERIFY
        assert(y.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> z;

        // VERIFY
        assert(z.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;

        // VERIFY
        assert(a.full() == false);

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> a;

        // VERIFY
        assert(a.empty() == true);

    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing DEFAULT CTOR." << std::endl;
    return 0;
}

