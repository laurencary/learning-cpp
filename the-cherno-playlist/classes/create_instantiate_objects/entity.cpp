#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main()
{
    // Creating on the stack
    // calling the default constructor bc it doesn't pass in a name
    // Entity entity;
    // Entity entity2("Lauren");

    // // Create an object like this most of the time, most managed way to instantiate
    // Entity entity3 = Entity("Austin");

    // //// Different scopes ////
    
    // // create a entity pointer
    // Entity* e;
    // {
    //     Entity entity4("Helena");
    //     e = &entity; //

    //     //at the end of the stack frame, entity4 will get deleted
    //     // if its made on the stack -> need heap allocation
    // }


    ////// Heap Allocation /////
    Entity* e;
    {
        //type is not entity pointer, with new keyword that returns a entity pointer
        // i.e. location on the heap
        Entity* entity = new Entity("Lauren");
        e = entity;

        // because entity is a pointer, you must deference it either with an ->
        std::cout << entity->GetName() << std::endl;

        // or with 
        std::cout << (*entity).GetName() << std::endl;
        // must delete anything that gets created with the new keyword
        // delete entity;
    }

    delete e;
    
}