//  String class test program
//
//  Tests: Test Split
//

#include "string.hpp"
#include <cassert>


int main(){
    {
    String str = "Hello-world-!";
        std::vector<String> result;
        
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
         
        //std::cout << result[3] << std::endl;
        
        std::cout << "For string (Hello-world-!) is [0]: " << result[0] << std::endl;
        std::cout << "For string (Hello-world-!) is [1]:" << result[1] << std::endl;
        std::cout << "For string (Hello-world-!) is [2]:" << result[2] << std::endl;
        assert(result[0] == "Hello");
        assert(result[1] == "world");
        assert(result[2] == "!");
        assert(result.size() == 3);
    }

    {
        String str = "-a--b-c";
        std::vector<String> result;
        
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "For string (-a--b-c) is [0]: " << result[0] << std::endl;
        std::cout << "For string (-a--b-c) is [1]: " << result[1] << std::endl;
        std::cout << "For string (-a--b-c) is [2]: " << result[2] << std::endl;
        std::cout << "For string (-a--b-c) is [3]: " << result[3] << std::endl;
        std::cout << "For string (-a--b-c) is [4]: " << result[4] << std::endl;

        assert(result[0] == "");
        assert(result[1] == "a");
        assert(result[2] == "");
        assert(result[3] == "b");
        assert(result[4] == "c");
        assert(result.size() == 5);
    }

    {
        String a("abc ef gh");
        std::vector<String> result;
        result = a.split(' ');
    
        std::cout << "This is the size: " << result.size() << std::endl;
        std::cout << "For this string,(abc ef gh), [0] is: " << result[0] << std::endl;
        std::cout << "For this string,(abc ef gh), [1] is: " << result[1] << std::endl;
        std::cout << "For this string,(abc ef gh), [2] is: " << result[2] << std::endl;


        assert(result.size() == 3);
    }

    {
        String a("   ");
        std::vector<String> result;
        result = a.split(' ');
    
        std::cout << "This is the size of string "   " is : " << result.size() << std::endl;
        std::cout << "This is [0] of "   ": " << result[0] << std::endl;
        std::cout << "This is [1] of "   ": " << result[1] << std::endl;
        std::cout << "This is [2] of "   ": " << result[2] << std::endl;
        std::cout << "This is [3] of "   ": " << result[3] << std::endl;

        assert(result.size() == 4);
    }

    {
    String a("This-is a string !");
    std::vector<String> result;
    result = a.split(' ');

    std::cout << "This is the size of This is a string: " << result.size() << std::endl;

    std::cout << "This is [0] of This is a string: " << result[0] << std::endl;
    std::cout << "This is [1] of This is a string: " << result[1] << std::endl;
    std::cout << "This is [2] of This is a string: " << result[2] << std::endl;
    std::cout << "This is [3] of This is a string: " << result[3] << std::endl;

    assert(result.size() == 4);
    }

    {
        String a("abc-ef-gh");
        std::vector<String> result;
        result = a.split('-');
    
        std::cout << "This is the size: " << result.size() << std::endl;
        std::cout << "For this string,(abc ef gh), [0] is: " << result[0] << std::endl;
        std::cout << "For this string,(abc ef gh), [1] is: " << result[1] << std::endl;
        std::cout << "For this string,(abc ef gh), [2] is: " << result[2] << std::endl;


        assert(result.size() == 3);
    }

    {
        String a("This-is a lengthy text which has today's date: 10/24/2021");
        std::vector<String> result;
        result = a.split(' ');


        std::cout << "This is the size: " << result.size() << std::endl;
        std::cout << "This is [0] of that string: " << result[0] << std::endl;
        std::cout << "This is [1] of that string: " << result[1] << std::endl;
        std::cout << "This is [2] of that string: " << result[2] << std::endl;
        std::cout << "This is [3] of that string: " << result[3] << std::endl;
        std::cout << "This is [4] of that string: " << result[4] << std::endl;
        std::cout << "This is [5] of that string: " << result[5] << std::endl;
        std::cout << "This is [6] of that string: " << result[6] << std::endl;
        std::cout << "This is [7] of that string: " << result[7] << std::endl;
        std::cout << "This is [8] of that string: " << result[8] << std::endl;        

        assert(result.size() == 9);
    }

    {
        String a("- - ? -- -");
        std::vector<String> result;
        result = a.split('-');
    
        std::cout << "This is the size: " << result.size() << std::endl;
        std::cout << "For this string,(abc ef gh), [0] is: " << result[0] << std::endl;
        std::cout << "For this string,(abc ef gh), [1] is: " << result[1] << std::endl;
        std::cout << "For this string,(abc ef gh), [2] is: " << result[2] << std::endl;
        std::cout << "For this string,(abc ef gh), [3] is: " << result[3] << std::endl;
        std::cout << "For this string,(abc ef gh), [4] is: " << result[4] << std::endl;
        std::cout << "For this string,(abc ef gh), [5] is: " << result[5] << std::endl;


        assert(result.size() == 6);
    }


}