//  Stack class test program
//
//  Tests: Push/Pop Test
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"


int main()
{
    {
        stack<int> a;
        a.push(3);
        a.push(9);
        a.push(8);
        a.pop();
        a.pop();
        a.pop();

        assert(a.empty() == true);

    }

    {
        stack<int> a;
        a.push(3);
        a.push(5);
        a.pop();

        assert(a.empty() == false);
    }

    {
        stack<char> a;
        a.push('a');
        a.push('b');
        a.push('c');
        a.pop();
        a.pop();
        a.pop();

        assert(a.empty() == true);
    }

    {
        stack<char> a;
        a.push('a');
        a.push('c');
        a.push('%');
        a.pop();

        assert(a.empty() == false);
    }

    {
        stack<String> a;
        a.push("hey there!");
        a.push("hi there!");
        a.push("hola");
        a.push("how are you?");
        a.pop();
        a.pop();

        assert(a.empty() == false);
    }

    {
        stack<String> a;
        a.push("hi there!");
        a.push("hey there!");
        a.pop();
        a.pop();

        assert(a.empty() == true);
    }

    std::cout << "Done testing Test PUSH/POP" << std::endl;
}