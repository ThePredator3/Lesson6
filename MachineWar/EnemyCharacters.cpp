#include <iostream>

#include "Skynet.h"
#include "EnemyCharacters.h"

Characters randomCharacter()
{
    int randomCharacter = rand() % 3;
    return static_cast<Characters>(randomCharacter);
}

Weapon enemyWeapon()
{
    int randomAttack = rand() % 3;
    return static_cast<Weapon>(randomAttack);
}

void InformationEnemyCharacter(Weapon currentEnemyWeapon, int currentEnemyDamage, int currentEnemyHealthRecovery)
{
    std::cout << std::endl;

    switch (currentEnemyWeapon)
    {
    case Weapon::Gun:
        std::cout << "Enemy chose the GUN" << std::endl;
        break;
    case Weapon::Shotgun:
        std::cout << "Enemy chose the SHOTGUN" << std::endl;
        break;
    case Weapon::Mashinegun:
        std::cout << "Enemy chose the MACHINEGUN" << std::endl;
        break;
    default:
        break;
    }

    std::cout << "Enemy dealt " << currentEnemyDamage << " damage" << std::endl;
    std::cout << "Enemy current health status: " << currentEnemyHealthRecovery << std::endl;
}

void ShowEnemyName(Characters enemyCharacter)
{
    std::cout << std::endl;

    switch (enemyCharacter)
    {
    case Characters::T_800:
        std::cout << "Enemy character is T-800" << std::endl;
        break;
    case Characters::John_Connor:
        std::cout << "Enemy character is John Connor" << std::endl;
        break;
    case Characters::T_1000:
        std::cout << "Enemy character is T-1000" << std::endl;
        break;
    default:
        break;
    }
}