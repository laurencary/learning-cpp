// allow us to move objects around
// not possible before c++11
// when rvalue references were introduced

#include <iostream>
class String
{
public:
    String() = default;
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        // copy data into memory buffer
        memcpy(m_Data, string, m_Size);
    }

    // copy constructor
    String(const String& other)
    {
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        // copy data into memory buffer
        memcpy(m_Data, other.m_Data, m_Size);
    }

    // move constructor, just pointing to the same block of data
    String(String&& other) noexcept
    {
        m_Size = other.m_Size;
        m_Data = other.m_Data;

        // it will also get deleted 
        // so he sets the size and pointer to null
        // because the data is being referenced in the new object in the entity scope
        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    ~String()
    {
        delete m_Data;
    }

private:
    char* m_Data;
    uint32_t m_Size;
};

class Entity
{
public:
    Entity(const String& name)
        : m_Name(name)
    {
    }

    //move constructor
    Entity(String&& name)
    // need to explicitly cast it to a temporary to use the move constructor
        :m_Name((String&&) name)
    {
        
    }
private:
    String m_Name;
};

int main()
{
    // this calls the copy constructor, we don't want it to get copied
    Entity entity("Lauren");

}