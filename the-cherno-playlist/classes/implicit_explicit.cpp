#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    explicit Entity(const std::string& name)
        : m_Name(name), m_Age(-1) {}
    explicit Entity(int age) 
        : m_Name("Unknown"), m_Age(age) {}

    const String &GetName() const { return m_Name; }
};

int main()
{
    Entity a("Lauren");
    Entity b(31);
    // Entity b = 31 ;
}

//use explicit when you want to deter implicit conversion