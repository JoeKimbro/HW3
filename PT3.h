#pragma once

#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& num) {
    for (int j = 1; j < num.size(); j++) {
        int key = num[j];
        int i = j - 1;
        while (i >= 0 && num[i] > key) {
            num[i + 1] = num[i];
            i--;
        }
        num[i + 1] = key;
    }
}
