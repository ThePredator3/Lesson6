#include <ctime>
#include <iostream>

#include "TaskThree.hpp"

void TaskThreeWithOldArray()
{
    srand(time(NULL));
    
    int myOldArray[10] {};
    
    for (int i = 0; i < 10; ++i)
    {
        myOldArray[i] = rand() % 10;
    }
    
    std::cout << "product of array elements: " << ProductOfArrayElemets(myOldArray) << std::endl;
}

int ProductOfArrayElemets(int arr[10])
{
    int result{1};
    
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 != 0)
        {
            result *= arr[i];
        }
    }
    
    return result;
}
