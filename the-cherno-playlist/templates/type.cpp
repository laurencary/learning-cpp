#include <iostream>
#include <string>
// use a template for a function that you may wnat to be able to pass in different
// types into

// void Print(int value)
// {
//     std::cout << value << std::endl;
// };


// template gets created at the compile time based on when the function is called
// and what data type is called with it
// if the print function never gets called, it doesn't exist at runtime
template <typename T> // T can be anything
void Print(T value)
{
    std::cout << value << std::endl;
};

int main()
{
    Print(5);
    // what if we want to print a float or a string and don't want to write a function/
    // for each of those options
    Print("Hello");
    Print(5.5f);

    // can call it explicitly calling the type
    Print<int>(4);
    Print<std::string>("Lauren");
}