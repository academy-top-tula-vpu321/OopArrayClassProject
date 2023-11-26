#include <iostream>
#include <cstring>

#include "Array.h"

template <typename T, size_t size>
void printArray(Array<T, size>& array)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

template <size_t size>
void printArray(Array<char, size>& array)
{
    for (int i{}; i < size; i++)
        std::cout << array[i];
    std::cout << "\n";
}

int main()
{
    srand(time(nullptr));

    Array<int, 10> array;
    for (int i{ 0 }; i < array.Size(); i++)
        array[i] = rand() % 100;

    printArray(array);


    Array<char, 10> str10{};
    strcpy_s(str10.getArray(), strlen("Hello") + 1, "Hello");

    printArray(str10);

    Array<char, 20> str20{};
    strcpy_s(str20.getArray(), strlen("Hello world") + 1, "Hello world");

    printArray(str20);

    /*for (int i{ 0 }; i < array.Size(); i++)
        std::cout << array[i] << " ";
    std::cout << "\n";*/
}
