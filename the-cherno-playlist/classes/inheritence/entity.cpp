#include <iostream>
#include <string>

class Entity
{
public:
    float X, Y;
    virtual std::string GetName() { return "Entity"; }

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
private:
    std::string m_Name;    
public:
    Player(const std::string& name)
        : m_Name(name) {}
    
    std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Lauren");
    PrintName(p);

    std::cin.get();
}