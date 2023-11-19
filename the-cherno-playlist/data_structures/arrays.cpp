#include <iostream>
#include <array>

// example is created on the stack
// another is created on a heap, you need to physically delete when created 
//      with new keyword and brakets
int main()
{
    //raw array?
    int example[5]; //allocate five spaces of integer type
    example[0] = 4;
    // can't print example, or you can but it'll just be the memory location

    int* another = new int[5];
    // have to create an array like this if you have a function that returns an 
    //      or else you'd have to return the beginning of where its allocated in memory?

    std::array<int, 5> third;

    delete[] another;


    // can also use implicit type conversion
    // auto doesn't work for arrays
    float temperature[] = { 80.1, 50.6, 31.7 };
}