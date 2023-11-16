#include <iostream>

struct Entity
{
    int x,y;
    static int z;

    void Print()
    {
        std::cout << x << ", " << y << ", " << z << std::endl;
    }
};

int Entity::z;

int main()
{
    Entity::z = 10;
    
    Entity e;
    e.x = 1;
    e.y = 3;

    Entity e1 = { 5, 8 };
    e.Print();
    e1.Print();
}

