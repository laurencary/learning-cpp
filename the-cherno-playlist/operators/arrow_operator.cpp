#include <iostream>
#include <string>

class Entity
{
public:
    void Print() const { std::cout << "Hello!" << std::endl; }
};

int main()
{
    Entity e;
    e.Print();

    // if entity was a pointer
    Entity* ptr = &e;
    // need to dereference the pointer before calling print

    //can do this but it takes an extra line
    Entity& entity = *ptr;
    entity.Print();

    //can also dereference the pointer on the same line
    // need the parenthesis because of operator presidence
    (*ptr).Print();

    // OR USE ARROW FUNCTIONS
    ptr->Print();

}