#include <iostream>

class Entity 
{
public:
    float X, Y;

    Entity()
    {
        std::cout << "Constructed Entity" << std::endl;
        X = 1.0f;
        Y = 3.0f;
    }

    // Entity() //constructor
    // {
        // X = 0.0f;
        // Y = 0.0f;
    // }

    // Entity(float x, float y) // constructor
    // {
    //     X = x;
    //     Y = y;
    // }

    ~Entity() // runs when instance is destroyed?
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }

};

int main()
{
    Entity e;
    e.Print();
}

