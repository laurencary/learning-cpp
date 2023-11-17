#include <iostream>
#include <string>

class Example
{
public:
    Example()
    {
        std::cout << "Created Entity!" << std::endl;
    };
    Example(int x)
    {
        std::cout << "Created Entity with " << x << std::endl;
    }
};


class Entity
{
private:
    std::string m_Name;
    Example m_Example;
public:
    // Entity()
    // {
    //     m_Name = "Unknown";
    // }

    // Entity(const std::string &name)
    // {
    //     m_Name = name;
    // }

    // with member initializer list in same order as 8,9
    // can have two different constructors for cases where they don't pass args
    Entity()
        : m_Name("Unknown"), m_Example(8)
    {
    }

    Entity(const std::string& name)
        : m_Name(name)
    {
    }

    // return value is a reference to a constant
    // the first const means it does not modify any non-mutable members of the class
    //      when called
    // it returns a reference that cannot be modified through this reference
    const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("Lauren");
    std::cout << e1.GetName() << std::endl;

    std::cin.get();
}