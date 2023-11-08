#include <ctime>
#include <iostream>

#include "TaskFour.hpp"

void TaskFourWithDynamicArray()
{
    srand(time(NULL));
    
    int arraySize{0};
    
    std::cout << "enter array size: ";
    std::cin >> arraySize;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a array size" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> arraySize;
    }
    
    int* dynamicArray = new int[arraySize];
    
    for (int i = 0; i < arraySize; ++i)
    {
        dynamicArray[i] = rand() % 10;
    }
    
    ModifiedDynamicArray(dynamicArray, arraySize);
    
    delete [] dynamicArray;
}

void ModifiedDynamicArray(int* dynamicArray, int arraySize)
{
    int firstNum{0};
    int secondNum{0};
    int temp{0};
    
    std::cout << "enter first number: ";
    std::cin >> firstNum;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a number" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> firstNum;
    }
    
    std::cout << "enter second number: ";
    std::cin >> secondNum;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a number" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> secondNum;
    }
    
//    for (int i = 0; i < arraySize; ++i)
//    {
//        std::cout << dynamicArray[i] << " ";
//    }
//    
//    std::cout << std::endl;
//    std::cout << "==================================" << std::endl;
    
    for (int i = 0; i < arraySize; ++i)
    {
        if (i == firstNum)
        {
            temp = dynamicArray[firstNum];
            dynamicArray[firstNum] = dynamicArray[secondNum];
            dynamicArray[secondNum] = temp;
        }
    }
    
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << dynamicArray[i] << " ";
    }
    
    std::cout << std::endl;
}
