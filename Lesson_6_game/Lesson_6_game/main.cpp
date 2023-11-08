#include <iostream>
#include <ctime>

#include "Weapon.hpp"
#include "Warrior.hpp"
#include "Damage.hpp"

int main()
{
    while (helthGamerOne > 0 || helthGamerTwo > 0)
    {
        std::cout << "gamer one: " << std::endl;
        
        Fight(helthGamerOne);
        
        std::cout << "gamer two: " << std::endl;
        
        Fight(helthGamerTwo);
    }
    
    return 0;
}
