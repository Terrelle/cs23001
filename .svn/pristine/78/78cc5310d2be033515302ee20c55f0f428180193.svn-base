//  Stack class test program
//
//  Tests: Assignment Test
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"


int main()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;
        a.push(2);

        stack<int> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(a.top() == 2);
        assert(b.top() == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> a;
        a.push("cool");

        stack<String> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(a.top() == "cool");
        assert(b.top() == "cool");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> a;
        a.push('d');

        stack<char> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(a.top() == 'd');
        assert(b.top() == 'd');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> a;
        a.push("awesome");
        

        stack<String> b;


        // ASSIGNING
        b = a;

        // VERIFY
        assert(a.top() == "awesome");
        assert(b.top() == "awesome");
        assert(a.empty() == false);
        assert(b.empty() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> a;
        a.push('4');
        

        stack<char> b;


        // ASSIGNING
        b = a;

        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top() == '4');
        assert(b.top() == '4');
        assert(a.top() == b.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;
        a.push(66);
        

        stack<int> b;
        
        // ASSIGNING
        b = a;

        
        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top() == 66);
        assert(b.top() == 66);
        assert(a.top() == b.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;
        a.push(66);
        

        stack<int> b;
        
        // ASSIGNING
        b = a;

        
        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top() == 66);
        assert(b.top() == 66);
        assert(a.top() == b.top());
    }

     {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> a;
        a.push('#');
        
        stack<char> b;
        
        // ASSIGNING
        b = a;

        
        // VERIFY
        assert(a.top() == '#');
        assert(b.top() == '#');
        assert(a.empty() == false);
        assert(b.empty() == false);
    }

     {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;
        a.push(66);
        

        stack<int> b;
        
        // ASSIGNING
        b = a;

        
        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top() == 66);
        assert(b.top() == 66);
        assert(a.top() == b.top());
    }

     {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> a;
        a.push("the quick brown fox jumped over the lazy dog");
        

        stack<String> b;
        
        // ASSIGNING
        b = a;

        
        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top() == "the quick brown fox jumped over the lazy dog");
        assert(b.top() == "the quick brown fox jumped over the lazy dog");
        assert(a.top() == b.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> a;
        a.push(22);
        a.push(7);

        stack<int> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(b.top() == a.top());
        assert(b.top() == 7);
        assert(a.top() == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> a;
        a.push('}');

        stack<char> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(b.empty() == false);
        assert(a.empty() == false);
        assert(a.top()   == '}');
        assert(b.top()   == '}');
        assert(b.top() == a.top());
    }

    {
        stack<String> a;
        a.push("456 6722 727289");

        stack<String> b;

        // ASSIGNING
        b = a;

        // VERIFY
        assert(a.top() == "456 6722 727289");
        assert(b.top() == "456 6722 727289");
        assert(a.top() == b.top());
        assert(a.empty() == false);
        assert(b.empty() == false);
    }

    std::cout << "Done Testing Assign Ctor" << std::endl;

}