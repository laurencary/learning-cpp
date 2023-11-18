#include <iostream>

// base class, not using MODERN C++ 
class String
{
private:
    char* m_Buffer; // points to buffer of chars
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        // copy the actual value into our buffer
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0; // manual null termination factor
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index]; 
    }
    // c++ provides a copy constructor
    // string const string reference
    String(const String& other)
        : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }
    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer; // friend in class lets you access private member
    return stream;
}


int main()
{
    String string = "Lauren";
    // this will crash (without the string copy constructor) 
    // because it does a shallow copy and just copies the pointer
    // two string in memory have the same char pointer
    // at the end of the scope, it tries to delete the m_buffer twice
    // we need to create a new char array & block of memory
    // deep copy by making a copy constructor
    String second = string;

}