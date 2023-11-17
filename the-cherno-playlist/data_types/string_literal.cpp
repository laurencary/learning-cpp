#include <iostream>
#include <string>

#include <stdlib.h> // strlen(str)

int main()
{
    //////// 1 byte (8bit) per char /////////
    // const char array of size 7, last char is the null termination char
    const char name[8] = "Lauren";

    // const char pointer of size 7, last char is the null termination char
    const char* name = "Lauren"; 
    
    //////// 2 byte per char /////////
    // white character pointer needs a preceeding capital L to denote its 
        // has all white characters
    const wchar_t* name2 = L"Lauren";  //might be 4byte on mac? 2 on windows, 4 on linux
    const char16_t* name3 = u"Lauren";

    //////// 4 byte per char /////////
    const char32_t* name3 = U"Lauren";

    // multiline chars r stands for raw
    const char* example = R"(line 1
    line 2
    line 3)";

}