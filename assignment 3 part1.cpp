// test assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "pt1.h"

int main() {
    Queue<int> q(10);

    // a) Instantiate the queue with integers and push 10 values into the queue
    for (int i = 1; i <= 10; ++i)
        q.push(i);

    // b) Display all the elements in a queue
    std::cout << "Elements in the queue: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    for (int i = 1; i <= 10; ++i)
        q.push(i);

    std::cout << "Move front element to rear:\n";
    q.move_to_rear();

    // Display elements after moving front to rear
    std::cout << "Elements in the queue after moving front to rear: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}