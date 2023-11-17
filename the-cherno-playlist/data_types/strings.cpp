#include <iostream>
#include <string>

int main()
{
    // in memory, every string ends with null termination characters and thats
    //      how it knows the size of the string

    /*
        SINGLE vs DOUBLE quotes
        characters are defined by single quotes,
        double quotes by defualt are for char pointers, not a string.
    */

    // "C-star" way of string
    // can't modify const
    const char* name = "Lauren";

    // need to add the null termination character
    char charString[7] = {'L', 'a', 'u', 'r', 'e', 'n', '\0' };
    charString[3] = 'w';
    std::cout << charString << std::endl;
    ///////////// Using the string library /////////////
    // its an array of chars

    std::string word = "Woohoo";

    //concatenating string
    //can't do
    // std::string test = "Lauren" + " Cary";
    // can do
    std::string test = "Lauren";
    test += " Cary";
    //OR surround one with a string constructor
    std::string test2 = std::string("Lauren") + " Cary";
    
    // methods
    bool contains = test2.find("aur") != std::string::npos; //illegal position
    
    std::cout << contains << std::endl;
    // std::cin.get();
}