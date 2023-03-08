#include "utilities.hpp"
#include <fstream>

int main(int argc, char const* argv[]){
    if(argc < 2){
        std::cerr << "Not enough arguments" << std::endl;
    }

    std::ifstream inputFile(argv[1]); // argv[1] corresponds to the inputFile
    if(!inputFile){
        std::cerr << "File not found" << std::endl;
    }
        
    String infix, token, postFix;

    std::ofstream outputFile(argv[2]);


    inputFile >> token; 
    while(!inputFile.eof()){

        if(token != ';' && token != '\n' && token != '\r'){
         infix = infix + token + " "; // concatenates to infix stream

        } else {
            if(!outputFile){
                std::cout << "Infix expression: " << infix << '\n';
                infix += ";";
                postFix = toPostFix(infix);
                std::cout << "PostFix expression: " << postFix << '\n';
                infix = ""; // resets infix 

            } else{
                outputFile << "Infix expression: " << infix << '\n';
                infix += ";";
                postFix = toPostFix(infix);
                outputFile << "PostFix expression: " << postFix << '\n';
                infix = ""; // resets infix 
            }
        }
        inputFile >> token;
    }

    if(infix != ""){
     if(token != ';' && token != '\n' && token != '\r'){
         infix = infix + token + " "; // concatenates to infix stream

        } else {
            if(!outputFile){
                std::cout << "Infix expression: " << infix << '\n';
                infix += ";";
                postFix = toPostFix(infix);
                std::cout << "PostFix expression: " << postFix << '\n';
                infix = ""; // resets infix 

            } else{
                outputFile << "Infix expression: " << infix << '\n';
                infix += ";";
                postFix = toPostFix(infix);
                outputFile << "PostFix expression: " << postFix << '\n';
                infix = ""; // resets infix 
            }
        }
    }

    inputFile.close();
    outputFile.close();
}