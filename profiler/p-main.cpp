////////////////////////////////////////////////////////////////////////////////
//  main.cpp
//  Profiler
//
//  Created by Jonathan Maletic.
//  Copyright 2021 Kent State University. All rights reserved.
//  Fall 2021
//  srcML 1.0
//
//  Modified by:
//
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

#include "ASTree.hpp"

////////////////////////////////////////////////////////////////////////////////
// Simple function to exercise/test copy-ctor, dtor, swap, assignment.
//
#include "profile.hpp"
profile main_cpp("main.cpp");

void testCopyAssign(srcML p) { main_cpp.count(__LINE__, "testCopyAssign"); 

    std::cout << "The orginal code: " <<std::endl; main_cpp.count(__LINE__); 

    std::cout << "------------------------------------------------" <<std::endl; main_cpp.count(__LINE__); 

    std::cout << p; main_cpp.count(__LINE__); 
   //Should print out same code as printed in main.
    std::cout << "------------------------------------------------" <<std::endl; main_cpp.count(__LINE__); 

    std::cout << "No code: " <<std::endl; main_cpp.count(__LINE__); 

    p = srcML(); main_cpp.count(__LINE__); 
      //Should print out nothing.
    std::cout << p; main_cpp.count(__LINE__); 

    std::cout << "------------------------------------------------" <<std::endl; main_cpp.count(__LINE__); 

}

////////////////////////////////////////////////////////////////////////////////
// Input:  One or more srcML files, main must be first file
// Output: One or more cpp files (with p- prefix) that are insturmented
//
// Example: profile main.cpp.xml utils.cpp.xml
// Results: p-main.cpp p-utlis.cpp
//
int main(int argc, char *argv[]) { main_cpp.count(__LINE__, "main"); 

    if (argc < 2) {
        std::cerr << "Error: Input file(s) are required." << std::endl; main_cpp.count(__LINE__); 

        std::cerr << "       The main must be the first argument followed by "; main_cpp.count(__LINE__); 

        std::cerr << "any other .cpp files.  For example:" << std::endl; main_cpp.count(__LINE__); 

        std::cerr << "profiler main.cpp.xml file1.cpp.xml file2.cpp.xml"; main_cpp.count(__LINE__); 

        std::cerr << std::endl << std::endl; main_cpp.count(__LINE__); 

        return(1);
    }

    srcML                     code;           //Source code to be profiled.
    std::vector<std::string>  inputName;      //Input file names (foo.cpp.xml)
    std::vector<std::string>  fileName;       //File names       (foo.cpp)
    std::vector<std::string>  profileName;    //Profile names    (foo_cpp)

    for (int i = 1; i < argc; ++i) {
        std::string temp;
        temp = argv[i]; main_cpp.count(__LINE__); 
                                   //Get foo.cpp.xml
        inputName.push_back(temp); main_cpp.count(__LINE__); 
                        //Put in list
        temp = temp.substr(0, temp.find(".xml")); main_cpp.count(__LINE__); 
         //Remove .xml
        fileName.push_back(temp); main_cpp.count(__LINE__); 
                         //Put in list
        std::replace(temp.begin(), temp.end(), '.', '_'); main_cpp.count(__LINE__); 
 //convert . to _
        profileName.push_back(temp); main_cpp.count(__LINE__); 
                      //Put in list
    }

    

    std::ifstream inFile(inputName[0].c_str());    //Read in the main
    inFile >> code; main_cpp.count(__LINE__); 

    inFile.close(); main_cpp.count(__LINE__); 



    testCopyAssign(code); main_cpp.count(__LINE__); 
 
    
    code.mainHeader(profileName, fileName); main_cpp.count(__LINE__); 
   //Add in main header
    code.mainReport(profileName); main_cpp.count(__LINE__); 
             //Add in the report
    code.functionCount(profileName[0]); main_cpp.count(__LINE__); 
       //Count funciton invocations
    code.lineCount(profileName[0]); main_cpp.count(__LINE__); 
           //Count line invocations

    std::string outFileName;
    outFileName = "p-" + fileName[0]; main_cpp.count(__LINE__); 

    std::ofstream outFile(outFileName.c_str());
    outFile << code << std::endl; main_cpp.count(__LINE__); 

    outFile.close(); main_cpp.count(__LINE__); 


    for (unsigned i = 1; i < inputName.size(); ++i) { //Read rest of the files
        inFile.open(inputName[i].c_str()); main_cpp.count(__LINE__); 

        inFile >> code; main_cpp.count(__LINE__); 

        inFile.close(); main_cpp.count(__LINE__); 


        code.fileHeader(profileName[i]); main_cpp.count(__LINE__); 
       //Add in file header info
        code.functionCount(profileName[i]); main_cpp.count(__LINE__); 
    //Count funciton invocations
        code.lineCount(profileName[i]); main_cpp.count(__LINE__); 
        //Count line invocations

        outFileName = "p-" + fileName[i]; main_cpp.count(__LINE__); 

        outFile.open(outFileName.c_str()); main_cpp.count(__LINE__); 

        outFile << code << std::endl; main_cpp.count(__LINE__); 

        outFile.close(); main_cpp.count(__LINE__); 

    }

    return 0;
}


