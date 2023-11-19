#include <iostream>
#include <string>

// l & r values, l & r value references
// cant have an l value reference to an r value
// int& a = 10;
// const references are compatible with both l values and r values

//can only pass in l value
void PrintName(std::string& name) {
    std::cout << name << std::endl;
}
// can only pass in r value
// even though the last one can accept with overloading, the r value call will go here
// if we know we're taking in a temporary object, we can treat it differently
void PrintName(std::string && name)
{
    std::cout << name << std::endl;
}

//can pass in both
void PrintName(const std::string& name) {
    std::cout << name << std::endl;
}

int GetLValue()
// returns an r value
{
    return 10;
}

int main()
{
    // left side and right side to the equation
    // 10 doesn't have a meaning until it has an l value

    int i = 10;

    // l value assigned to an l value
    int a = i;
    // l value              r -value
    std::string firstName = "Lauren";
    std::string lastName = "Cary";
    // l value              r -value bc temp expression
    std::string fullName = firstName + lastName;
    PrintName(fullName);
    PrintName(firstName + lastName);
}

