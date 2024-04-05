// Assignment 3 pt3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "PT3.h"


int main() {
    // Example vector of integers
    std::vector<int> numbers = { 5, 2, 9, 1, 6 };

    // Printing unsorted array
    std::cout << "Unsorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sorting the array
    insertion_sort(numbers);

    // Printing sorted array
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
