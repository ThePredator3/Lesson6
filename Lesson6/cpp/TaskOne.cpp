#include <iostream>
#include <vector>
#include <ctime>

#include "TaskOne.hpp"

void TaskOneWithVector()
{
    srand(time(NULL));
    
    std::vector<int> myVector {};
    
    for (size_t i = 0; i < 10; ++i)
    {
        int randomValue = rand() % 10;
        
        myVector.push_back(randomValue);
    }
    
    std::cout << "myVector: ";
    
    for (auto now : myVector)
    {
        std::cout << now << " ";
    }
    
    std::cout << std::endl;
    
    SmallestEvenElement(myVector);
    
//    std::cout << "\neven elements: ";
//    
//    for (size_t i = 0; i < 10; ++i)
//    {
//        if (myVector[i] % 2 == 0 && myVector[i] != 0)
//        {
//            std::cout << myVector[i] << " ";
//        }
//    }
    
//    std::cout << "\nsmallest even element: ";
//    
//    int temp = myVector[0];
//    
//    for (size_t i = 0; i < 10; ++i)
//    {
//        if (myVector[i] % 2 == 0 && myVector[i] != 0 && myVector[i] < temp)
//        {
//            temp = myVector[i];
//        }
//    }
//    
//    std::cout << temp << std::endl;
    
    
}

void SmallestEvenElement(std::vector<int>& myVector)
{
    std::cout << "\nsmallest even element: ";
    
    int min{0};
    int count{0};
    
    for (size_t i = 0; i < 10; ++i)
    {
        if (count == 0 && myVector[i] % 2 == 0 && myVector[i] != 0)
        {
            min = myVector[i];
            count++;
        }
        else if (myVector[i] < min && myVector[i] % 2 == 0 && myVector[i] != 0)
        {
            min = myVector[i];
        }
    }
    std::cout << min << std::endl;
    std::cout << std::endl;
}

