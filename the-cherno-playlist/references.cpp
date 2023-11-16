#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int value) {
    value++;
}

void IncrementByPointer(int* value) { //take in a pointer
    (*value)++; //dereference operator
}

void IncrementByRef(int& value)
{               // take in a pointer
    value++; // dereference operator
}

int main()
{
    int a = 5;
    Increment(a);
    LOG(a);  // a doesn't get incremented, but if we pass in the reference, a will get updated to 6

    IncrementByPointer(&a);
    LOG(a);

    int& ref = a; // really just creating an alias for a
    IncrementByRef(ref);
    IncrementByRef(a);
    LOG(a);
    ref = 2; // updates a to 2, there aren't two variables

    int c = 5;
    int d = 8;

    int* ref2 = &c; //pointer to memory address of c
    *ref2 = 2; //dereference the pointer to update value at that address to 2
    ref2 = &d; //update the pointer to the memory address of d
    *ref2 = 1; // update value there to 1

    LOG(c); //2
    LOG(d); //1

    // std::cin.get(); // keep terminal open until you press enter
}