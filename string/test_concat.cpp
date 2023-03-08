//  String class test program
//
//  Tests: Concat Test
//

#include <cassert>
#include "string.hpp"

int main(){
    {
    String one("12345");
    String two("efghij");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "12345efghij");
    }

    {
    String one("this is ");
    String two("cool");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "this is cool");
    }

    {
    String one(" ");
    String two("efghij");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == " efghij");
    }

    {
    String one("decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdm");
    String two("cool");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcool");
    }

    {
    String one("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    String two("bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");
    }

    {
    String one("bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgb");
    String two("efghij");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgbefghij");
    }

    {
    String one("bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbg5dee");
    String two("decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcool");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbg5deedecjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcool");
    }

    {
    String one("edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv");
    String two(" ");

    String result = one + two;
    std::cout << "The two strings concatenated is: " << result << std::endl;

    assert(result == "edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv ");
    }

    std::cout << "Done testing concatenation" << std::endl;
}