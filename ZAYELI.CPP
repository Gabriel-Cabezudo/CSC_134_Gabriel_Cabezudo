//chat we lit

#include <iostream>
using namespace std;

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::getline(std::cin, name); // reads full name including spaces

    if (name == "Zay") {
        std::cout << "Take a shower Bun Bun! You Stink!" << std::endl;
    } else if (name == "Eli") {
        std::cout << "Hello Mr. 200... Sadia misses you a lot!" << std::endl;
    } else if (name == "Gabe") {
        std::cout << "Welcome Master... I missed you." << std::endl;
    } else {
        std::cout << "Hello " << name << "!" << std::endl;
    }

    return 0;
}