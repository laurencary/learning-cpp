#include <iostream>

// this keyword is only availabe inside of member funcitons
// this is a pointer of the current instance
// method has to be called with a valid object

class Entity 
{
public:
    int x, y;
    
    Entity(int x, int y) 
    {
        Entity* const e = this;
        this->x = x;
        this->y = y;

    }

    int GetX() const
    {
        
    }
};

int main()
{

}