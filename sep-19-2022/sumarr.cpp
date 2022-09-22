#include <iostream>

int main()
{
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    std::cout << "sum = " << sum << std::endl;
}