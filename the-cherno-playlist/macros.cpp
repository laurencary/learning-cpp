#include <iostream>
#include <string>

// these aren't good examples of best practices just examples of how itworks
#define WAIT std::cin.get() // don't need a semi colon
#define OPEN_CURLY {
#define LOG(x) std::cout << x << std::endl

int main()
OPEN_CURLY
    LOG("Hello");
    WAIT; //because we have the semi colon here
}