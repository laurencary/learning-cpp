#include <iostream>
#include <string>
// kind of like metaprogramming


// class array created on the stack
template<typename T, int N>
class Array
{
private:
    // we want the size to be determined at compile time
    T m_Array[N];
public:
    int GetSize() const { return N; }
};

int main()
{
    Array<int, 5> array;
    
}