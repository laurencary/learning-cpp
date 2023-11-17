#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0; //count how many times debugger is called
    //mark as mutable to leave GetName() const
public:
    const std::string& GetName() const 
    { 
        m_DebugCount++;
        return m_Name; 
    }
};

int main()
{
    const Entity e;
    e.GetName();

    //lambdas
    int x = 8;
    // auto f = [=]()  by value
    // auto f = [&]()  by reference
    auto f = [=]() mutable
    {
        x++;
        std::cout << x << std::endl;
    };

    f();
}