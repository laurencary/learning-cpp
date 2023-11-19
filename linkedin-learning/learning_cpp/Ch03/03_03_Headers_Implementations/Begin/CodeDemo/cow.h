
#ifndef COW_H
#include <string>

enum cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};

class Cow
{
private:
    std::string m_Name;
    int m_Age;
    unsigned char m_Purpose;

public:
    Cow(std::string name, int age, unsigned char purpose);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
};
#endif //COW_H