#pragma once
#include <iostream>
#include <vector>

template<typename Item_type>
class Queue {
private:
    Item_type* arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int currentSize;


public:
    Queue(int size) : capacity(size), frontIndex(0), rearIndex(-1), currentSize(0) {
        arr = new Item_type[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    void push(const Item_type& element) {
        if (currentSize == capacity) {
            std::cerr << "Queue is full. Cannot push more elements.\n";
            return;
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = element;
        ++currentSize;
    }

    void pop() {
        if (currentSize == 0) {
            std::cerr << "Queue is empty. Cannot pop.\n";
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        --currentSize;
    }

    Item_type front() const {
        if (currentSize == 0) {
            std::cerr << "Queue is empty. No front element.\n";
            exit(EXIT_FAILURE);
        }
        return arr[frontIndex];
    }

    int size() const {
        return currentSize;
    }

    bool empty() const {
        return currentSize == 0;
    }

    void move_to_rear() {
        if (currentSize < 2) {
            std::cerr << "Queue doesn't have enough elements to move.\n";
            return;
        }
        Item_type temp = front();
        pop();
        push(temp);
    }

};