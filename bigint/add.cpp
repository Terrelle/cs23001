// Terrelle Tettey
// Testing Input Stream
// CS23001

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    
    while(!in.eof()){
        bigint x, y;
        in >> x >> y;

        if(in.eof()) break;
        bigint result = x + y;
        std::cout << x << ", " << y << std::endl;
        std::cout << "The result is " << result << std::endl;
    }
    in.close();
    return 0;
}