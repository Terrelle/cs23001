//  String class test program
//
//  Tests: Equal Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
    String one("be");
    String two("be");

    bool result(one == two);

    assert(one == "be");
    assert(two == "be");
    assert(result == true);
    }

    {
        String one("here");
        String two("there");

        bool result(one == two);

        
        assert(one == "here");
        assert(two == "there");
        assert(result != true);
    }

    {
    String one("somewhere");
    String two("there");

    bool result(one == two);

    assert(one == "somewhere");
    assert(two == "there");
    assert(result == false);
    }

    {
    String one("@123");
    String two("@123");

    bool result(one == two);

    assert(one == "@123");
    assert(two == "@123");
    assert(result == true);
    }

    {
    String one("be");
    String two("be");

    bool result(one == two);

    assert(one == "be");
    assert(two == "be");
    assert(result == true);
    }

    {
    String one("b");
    String two('b');
    String three = "b";


    bool result(one == "b");

    assert(one == "b");
    assert(one == 'b');
    assert(two == "b");
    assert(two == 'b');
    assert(three == 'b');
    assert(three == "b");
    
    assert(one == "b");
    assert(result == true);
    }


    std::cout << "Done testing Equals" << std::endl;

    

}