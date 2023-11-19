#include "cow.h"

Cow::Cow(std::string name, int age, unsigned char purpose)
    : m_Name(name), m_Age(age), m_Purpose(purpose) {}

std::string Cow::get_name() { return m_Name; }
int Cow::get_age() { return m_Age; }
unsigned char Cow::get_purpose() { return m_Purpose; }

void Cow::set_age(int new_age)
{
    m_Age = new_age;
}