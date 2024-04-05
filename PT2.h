#pragma once
#include <vector>

template<typename Item_Type>

void display_vector(const std::vector<Item_Type>& vec) {
    std::cout << "Vector contents: ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

template<typename Item_Type>

int last_linear_search(const std::vector<Item_Type>& items, const Item_Type& target, int pos_last) {
    if (pos_last < 0)
        return -1;
    if (items[pos_last] == target)
        return pos_last;
    else
        return last_linear_search(items, target, pos_last - 1);
}