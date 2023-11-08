#include <ctime>
#include <array>
#include <iostream>

#include "TaskTwo.hpp"



void TaskTwoWithArray()
{
    srand(time(NULL));
    
    std::array<int, 10> myArray {};
    
    for (int i = 0; i < 10; ++i)
    {
        myArray[i] = rand() % 10;
    }
    
    // вывод массива
    
//    std::cout << "myArray: ";
//    
//    for (int i = 0; i < 10; ++i)
//    {
//        std::cout << myArray[i] << " ";
//    }
//    
//    std::cout << std::endl;
    
    // минимальное значение с номером
    
//    std::cout << "min number: " << MinNumber(myArray) << std::endl;
    
    // максимальное значение с номером
    
//    std::cout << "max number: " << MaxNumber(myArray) << std::endl;
    
    std::cout << "sum numbers = " << MinNumber(myArray) + MaxNumber(myArray) << std::endl;
}

int MaxNumber(std::array<int, 10>& myArray)
{
    int max = myArray[0];
    int maxNumber{0};
    
    for (int i = 0; i < 10; ++i)
    {
        if (max < myArray[i])
        {
            max = myArray[i];
            maxNumber = i;
        }
    }
    
    return maxNumber;
}

int MinNumber(std::array<int, 10>& myArray)
{
    int min = myArray[0];
    int minNumber{0};
    
    for (int i = 0; i < 10; ++i)
    {
        if (min > myArray[i])
        {
            min = myArray[i];
            minNumber = i;
        }
    }
    
    return minNumber;
}
