//  String class test program
//
//  Tests: Input Test
//

#include <fstream>
#include <iostream>
#include "string.hpp"

int main(){
    std::ifstream inFile;
    inFile.open("test_input.txt");

    if(!inFile.is_open()){
        std::cerr << "Could not open, exiting" << std::endl;
        exit(1);
    }

    String one;
    while(!inFile.eof()){
        inFile >> one;
        std::cout << one << std::endl;
    }
    
    inFile.close();
    std::cout << "Done testing input operator" << std::endl;
}