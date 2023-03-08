//  String class test program
//
//  Tests: Find String Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
        String one = "thisiscool";

        int result = one.findstr(2, "is");
        std::cout << "Result of findString: " << result << std::endl;

        assert(result == 2);
    }


    {
        String one = "thisiscool";

        int result = one.findstr(0, "this");
        std::cout << "Result of findString: " << result << std::endl;

        assert(result == 0);
    }

    {
        String one = "tyisuuhmyuio";

        int result = one.findstr(2, "is");
        int result2 = one.findstr(1, "yisu");
        std::cout << "Result1 of findString: " << result << std::endl;
        std::cout << "Result2 of findString: " << result2 << std::endl;

        assert(result == 2);
        assert(result2 == 1);
    }

    {
        String one = "13uht776oi788?";

        int result = one.findstr(0, "13");
        int result2 = one.findstr(1, "3uht");
        std::cout << "Result1 of findString: " << result << std::endl;
        std::cout << "Result2 of findString: " << result2 << std::endl;

        assert(result == 0);
        assert(result2 == 1);
    }

    {
        String one = "13uht776oi788?";
        String two("776");

        int result = one.findstr(5, two);
        std::cout << "Result1 of findString: " << result << std::endl;

        assert(result == 5);
    }

    {
        String one = "looksgood";

        int result = one.findstr(7, "od");
        std::cout << "Result1 of findString: " << result << std::endl;

        assert(result == 7);
    }

    {
        String one = "errdhjiik";

        int result = one.findstr(0, "er");
        int result2 = one.findstr(1, "rrd");
        std::cout << "Result1 of findString: " << result << std::endl;
        std::cout << "Result2 of findString: " << result2 << std::endl;

        assert(result == 0);
        assert(result2 == 1);
    }
    std::cout << "Done testing find string" << std::endl;

}