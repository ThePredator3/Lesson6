#include <iostream>
#include <ctime>

#include "Skynet.h"
#include "Greetings.h"
#include "MainCharacters.h"
#include "EnemyCharacters.h"
#include "DataEntryCheck.h"

extern int myHealth = 100;
extern int enemyHealth = 100;

int WeaponDamage(Weapon myWeapon)
{
    switch (myWeapon) {
    case Weapon::Gun:
        return rand() % 10;
        break;
    case Weapon::Shotgun:
        return rand() % 40;
    case Weapon::Mashinegun:
        return rand() % 60;
    default:
        return 0;
    }
}

int HealthRecovery(Characters myCharacter, int& health)
{
    switch (myCharacter) {
    case Characters::T_800:
        return health += 10;
        break;
    case Characters::John_Connor:
        return health += 2;
        break;
    case Characters::T_1000:
        return health += 15;
        break;
    default:
        return 0;
    }
}

bool RoundResult(int myHealthRecovery, int enemyHealthRecovery)
{
    bool gameOver{ false };

    std::cout << std::endl;

    if (myHealthRecovery <= 0)
    {
        std::cout << "You lode!" << std::endl;
        gameOver = { true };
    }
    else if (enemyHealthRecovery <= 0)
    {
        std::cout << "You won!" << std::endl;
        gameOver = { true };
    }
    else if (myHealthRecovery <= 0 && enemyHealthRecovery <= 0)
    {
        std::cout << "Game drow!" << std::endl;
        gameOver = { true };
    }

    return gameOver;
}

void MachineWar()
{
    srand(static_cast<unsigned int>(time(NULL)));

    Greetings();

    int round{ 1 };
    int choiceCharacter{ 0 };
    bool gameOver{ false };

    std::cout << "\nSelect a character: ";
    std::cin >> choiceCharacter;

    DataEntryCheck(choiceCharacter);

    Characters myCharacter = static_cast<Characters>(choiceCharacter);
    Characters enemyCharacter = randomCharacter();

    ShowMainName(myCharacter);
    ShowEnemyName(enemyCharacter);

    while (!gameOver) {
        std::cout << std::endl << "Round " << round << std::endl;
        
        Guns();

        Weapon myWeapon = mainCharactersWeapon();
        Weapon enemyAttack = enemyWeapon();

        int myDamage = WeaponDamage(myWeapon);
        int enemyDamage = WeaponDamage(enemyAttack);

        system("cls");

        myHealth -= enemyDamage;
        enemyHealth -= myDamage;

        int myHealthRecovery = HealthRecovery(myCharacter, myHealth);
        int enemyHealthRecovery = HealthRecovery(enemyCharacter, enemyHealth);

        InformationMainCharacter(myWeapon, myDamage, myHealthRecovery);
        InformationEnemyCharacter(enemyAttack, enemyDamage, enemyHealthRecovery);
        
        gameOver = RoundResult(myHealthRecovery, enemyHealthRecovery);

        ++round;

        std::cout << std::endl;
    }
}