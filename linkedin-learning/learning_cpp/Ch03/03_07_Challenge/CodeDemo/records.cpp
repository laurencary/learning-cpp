// Write your implementation code here
#include "records.h"

Student::Student(int the_id, std::string the_name)
    : id(the_id), name(the_name) {}

int Student::get_id() 
{
    return id;
}

std::string Student::get_name()
{
    return name;
}