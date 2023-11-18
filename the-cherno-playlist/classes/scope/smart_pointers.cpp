#include <iostream>
#include <memory> 
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

    void Print() {}
};

/*
smart pointers allow us to use dynamic memory allocation by automating the
delete inside of a class so we can use the new keyword,
 */

int main(){
    {
        //// UNIQUE POINTER ////
        // when you want a scoped pointer -> stack allocated pointer, dies when scope is done
        // using a template
        // std::unique_ptr<Entity> entity(new Entity());
        // entity->Print();

        // PREFERRED WAY
        // due to exception safety if the construction ends up throwing an error
        // and the pointer points to nothing and causes a memory leak???
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

        //// SHARED POINTER ////
        // keeps a count of shared pointers and then deletes them when it gets to 0
        // never use new keyword with shared pointer
        std::shared_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            e0 = sharedEntity;

            //// WEAK POINTER ////
            /*
                lets you copy a shared pointer without increasing the reference
                count. you can check if its still alive, it wont keep it alive
            */
            std::weak_ptr<Entity> weakEntity = sharedEntity;
        }
    }
    // shared entity dies here when all the allocated references are out of scope
};