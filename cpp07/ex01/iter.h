#ifndef ITER_H
#define ITER_H

#include <string>
#include <iostream>

template <typename T>
void print_el(T el) {
    std::cout << el << std::endl;
}

template <typename T>
void iter(T *arr, int length, void (*func) (T el)) {
    for (int i = 0; i < length; i++) {
        func(arr[i]);
    }
}

#endif
