// fileio.cpp
// Adding data and reading text from files
// Terrelle Tettey on 9/24/21.

#include <iostream>
#include <fstream>

void funcNum();
void funcText();

int main()
{

    funcNum();
    funcText();
}

void funcNum()
{
    std::ifstream num_file;

    num_file.open("fileio-data-1.txt");
    if (!num_file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
    }

    int x, y;
    char ch;

    num_file >> x >> ch >> y >> ch;
    int result = x + y;
    std::cout << result << std::endl;

    num_file.close();
}

void funcText()
{

    char ch;
    std::ifstream text_file;
    text_file.open("fileio-text.txt");
    if (!text_file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
    }

    text_file.get(ch);

    while (!text_file.eof())
    {
        if (ch == ' ')
            std::cout << " ";

        else
            std::cout << ch;
            text_file.get(ch);
    }
    text_file.close();
}