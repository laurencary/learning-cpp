#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;

public:
    Entity() : m_Name("Unknown") {}
    Entity(const String &name) : m_Name(name) {}

    const String &GetName() const { return m_Name; }
};


int main() 
{
    int a = 2;
    // dynamically allocate memory on the heap:
    int* b = new int;
    *b = 5;

    // example with array. finds 160 bytes
    int* c = new int[40];
    //dont need to derefrence arrays
    c[0] = 4;

    // new allocates the memory and calls the constructor(s)
    Entity* e = new Entity();

    delete b;
    delete[] c;
    delete e;
}