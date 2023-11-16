#include <iostream>

#define LOG(x) std::cout << x << std::endl


int main() {
    // void* ptr = NULL; // or you can write 0 or nullptr. void means typeless 

    int var =  8;
    void* ptr = &var; // memory address for var variable

    // if you want to write to that same space in memory:
    int var2 = 10;
    int* ptr2 = &var2;
    *ptr2 = 15;

    int** dblptr = &ptr2; //double pointer with the memory address of the first pointer

    std::cin.get(); //keep terminal open until you press enter
}