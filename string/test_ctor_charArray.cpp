//  String class test program
//
//  Tests: Ctor CharArray
//

#include <cassert>
#include "string.hpp"

int main(){
    {
        //char one[5] = {'a', 'b', 'c', 'd', 'e'};

        String str("abcde");

        assert(str == "abcde");

    }

    {
        //char one[8] = {'1', 'a', 'u', 'r', 't', 'e', 'q', 'p'};
        String str("1aurteqp");

        assert(str == "1aurteqp");
    }

    {
        //char one[3] = {'h', 'e', 'e'};
        String str("hee");

        assert(str == "hee");
    }

    {

        String str("vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd");

        assert(str == "vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd");
    }

    {

        String str("aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf");

        assert(str == "aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf");
    }

        std::cout << "Done testing char array Ctor" << std::endl;

}