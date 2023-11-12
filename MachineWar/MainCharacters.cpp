#include <iostream>

#include "Skynet.h"
#include "MainCharacters.h"
#include "DataEntryCheck.h"

Weapon mainCharactersWeapon()
{
    int numWeapon{ 0 };

    std::cout << "\nSelect a weapon: ";
    std::cin >> numWeapon;

    DataEntryCheck(numWeapon);

    return static_cast<Weapon>(numWeapon);
}

void InformationMainCharacter(Weapon currentMyWeapon, int currentMyDamage, int currentMyHealthRecovery)
{
    std::cout << std::endl;

    switch (currentMyWeapon)
    {
    case Weapon::Gun:
        std::cout << "You chose the GUN" << std::endl;
        break;
    case Weapon::Shotgun:
        std::cout << "You chose the SHOTGUN" << std::endl;
        break;
    case Weapon::Mashinegun:
        std::cout << "You chose the MACHINEGUN" << std::endl;
        break;
    default:
        break;
    }

    std::cout << "You dealt " << currentMyDamage << " damage" << std::endl;
    std::cout << "Your current health status: " << currentMyHealthRecovery << std::endl;
}

void ShowMainName(Characters mainCharacter)
{
    std::cout << std::endl;

    switch (mainCharacter)
    {
    case Characters::T_800:
        std::cout << "Your character is T-800" << std::endl;
        break;
    case Characters::John_Connor:
        std::cout << "Your character is John Connor" << std::endl;
        break;
    case Characters::T_1000:
        std::cout << "Your character is T-1000" << std::endl;
        break;
    default:
        break;
    }
}