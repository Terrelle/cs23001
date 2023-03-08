//  Stack class test program
//
//  Tests: DTOR Test
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main() 
{
    {
    stack<int> a;
    a.push(44);

    a.~stack();

    assert(a.empty() == true);
    }

    {
        stack<int> a;
        a.push(33);
        a.push(90);
        a.push(449940);
        a.push(3388383);
        a.push(77338);

        a.~stack();

        assert(a.empty() == true);
    }

    {
        stack<char> a;
        a.push('a');
        a.push('b');
        a.push('c');

        a.~stack();

        assert(a.empty() == true);

    }

    {
        stack<char> a;
        a.push('q');
        a.push('a');
        a.push('b');
        a.push('c');
        a.push('r');

        a.~stack();

        assert(a.empty() == true);
    }

    {
        stack<String> a;
        a.push("the quick fox jumped");
        a.push("over the lazy dog");
        a.push("the dog was amazed");

        a.~stack();

        assert(a.empty() == true);
    }

    {
        stack<String> a;
        a.push("abcde");
        a.push("fghij");
        a.push("klmno");
        a.push("pqrst");
        a.push("uvwxy");
        a.push("z");

        a.~stack();

        assert(a.empty() == true);
    }

    std::cout << "Done testing DTOR" << std::endl;

}