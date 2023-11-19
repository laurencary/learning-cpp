// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

struct cow
{
    std::string name;
    int age;
    unsigned char purpose;
};

int main(){
    cow mycow;
    mycow.age = 5;
    mycow.name = "Lulu";
    mycow.purpose = pet;
    return (0);
}
