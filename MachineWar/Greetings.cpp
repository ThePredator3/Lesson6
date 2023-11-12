#include <iostream>

#include "Greetings.h"

void Greetings()
{
    std::cout << "Only you can save this world!" << std::endl;
    std::cout << "\nOr destroy it..." << std::endl;
    std::cout << "\nvailable characters:" << std::endl;
    std::cout << "0 - T-800 (Mr.Arny)\n1 - John Connor\n2 - T-1000 (Bad Boy)" << std::endl;
    std::cout << "\nWhat will you choose?" << std::endl;
}

void Guns()
{
    std::cout << "\nvailable weapons:" << std::endl;
    std::cout << "0 - Gun\n1 - Shotgun\n2 - Mashinegun" << std::endl;
    std::cout << "\nWhat will you choose?" << std::endl;
}