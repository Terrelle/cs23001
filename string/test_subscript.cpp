//  String class test program
//
//  Tests: Test Subscript
//

#include <cassert>
#include "string.hpp"

int main(){
    {
         // char Arr[4] = {'n', 'i', 'c', 'e'};
         String str("nice"); // also "nice"
         char result = str[2]; // "c"
         std::cout << "The subscript is: " << result << std::endl;
         assert(result == 'c');
    }


    {
        // char Arr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
        String str("abcdef");
        char result = str[3];
        std::cout << "The subscript is " << result << std::endl;
        assert(str == "abcdef");
        assert(result == 'd');
    }

    {
        String str("earthisbeautiful");
        char result = str[4];
        std::cout << "The subscript is: " << result << std::endl;
        assert(str == "earthisbeautiful");
        assert(result == 'h');
    }

    {
        // char Arr[6] = {'g', '@', 'd', 'w', 'e', 'x'};
        String str("g@dwex");
        char result = str[1];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "g@dwex");
        assert(result == '@');
    }

    {
        String str("1edw");
        char result = str[0];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "1edw");
        assert(result == '1');
    }

    {
        String str("qwsdfgterojzxcbaly");
        char result = str[16];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "qwsdfgterojzxcbaly");
        assert(result == 'l');
    }


    {
        String str("asadasszxdfrecvfreqasfgtcsdxcjgbip");
        char result = str[32];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "asadasszxdfrecvfreqasfgtcsdxcjgbip");
        assert(result == 'i');
    }


    {
        String str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        char result = str[103];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        assert(result == 'y');
    }

    {
        String str("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        char result = str[252];
        std::cout << "Here is the subscript: " << result << std::endl;
        assert(str == "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        assert(result == 'a');
    }


    std::cout << "Done testing Subscript" << std::endl;

}