#include <iostream>
#include <string>

class Entity
{
private:
    int m_X, m_Y;
    //you can mark variables 
    mutable int var;
public:
    // this use of const only works in a class
    // read only - doesnt modify anything
    // UNLESS you mark a variable as mutable
    // why do we do this?
    int GetX() const
    {
        var = 2;
        return m_X;
    }

    void SetX(int x)
    {
        m_X = x;
    }
};

// void PrintEntity(const Entity& e)
// {
//     std::cout << e.GetX() << std::endl;
// };

int main()
{
    const int MAX_AGE = 90;

    int* a = new int;
    
    // cannot modify contents of pointer
    // can change the pointer
    const int* a = new int;

    // can change contents, cant change pointer
    int* const a = new int;

    // cant change contents or pointer
    const int* const a = new int;
}