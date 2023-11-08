#include <iostream>

#include "Damage.hpp"
#include "Warrior.hpp"
#include "Weapon.hpp"

void Fight(int helth)
{
    int weaponType{0};

    std::cout << "Выберите тип оружия 1 - меч, 2 - топор, 3 - булава: ";
    std::cin >> weaponType;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a weapon type" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> weaponType;
    }
    
    switch (weaponType) {
        case 1:
            helth -= sword;
            break;
        case 2:
            helth -= axe;
            break;
        case 3:
            helth -= mace;
            break;
        case 0:
            break;
    }
    
    if (helth > 0)
    {
        std::cout << "your helth: " << helth << std::endl;
    }
    
    if (helth <= 0)
    {
        std::cout << "you are win!" << std::endl;
    }
}
