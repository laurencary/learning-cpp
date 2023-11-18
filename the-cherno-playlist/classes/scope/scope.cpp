#include <iostream>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
};

// EXAMPLE OF WHAT YOU CANNOT DO
// array gets created on the stack and dies when the function is over
// it just returns a pointer to that location but nothing is in that location 
    // after the function ties
    // stack memory gets cleared as soon as you go out of scope
int* WrongCreateArray()
{  
    int array[50];
    return array;
};

// can do it this way but then you still need to delete it at some point
int* CreateArray()
{
    int* array = new int[50];
    return array;
};

// How can we leverage stack based variables?
// scoped pointer, a class thats a wrapper over a pointer
// which upon construction heap allocates the pointer
// then upon destruction deletes the pointer
// automating the new and delete cycle

class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};


int main()
{  
    // this code will fail
    int *a = WrongCreateArray();

    // scoped pointer entity
    ScopedPtr e = new Entity(); // this workds because of implicit conversion
    // ^ this will get destroyed when we go out of scope
}