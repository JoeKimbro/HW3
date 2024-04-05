// Assignment 3 pt 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "PT2.h"

int main()
{

    std::vector<int> vec = { 1,2,3,4,5,3,6,7 };
    display_vector(vec);
    int target;
    std::cout << "Enter the value you would like to search for: ";
    std::cin >> target;


    int pos = last_linear_search(vec, target, vec.size() - 1);

    if (pos != -1)
        std::cout << "Last occurrence of target found at position: " << pos << std::endl;
    else
        std::cout << "Target not found in the vector." << std::endl;

    return 0;
}
