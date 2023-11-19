// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {dairy, meat, hide, pet};

class Cow{
private:
    string m_Name;
    int m_Age;
    unsigned char m_Purpose;
public:
    Cow(string name, int age, unsigned char purpose)
        : m_Name(name), m_Age(age), m_Purpose(purpose) {}

    string get_name() { return m_Name; }
    int get_age() { return m_Age; }
    unsigned char get_purpose() { return m_Purpose; }

    void set_age(int new_age)
    {
        m_Age = new_age;
    }
};

int main(){
    Cow cow("Lulu", 3, pet);
    Cow* c = new Cow("Helena", 8, pet);

    std::cout << cow.get_name() << std::endl;
    std::cout << (*c).get_name() << std::endl;
    std::cout << c->get_name() << std::endl;


    delete c;
    return (0);
}
