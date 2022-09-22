#include <iostream>

int main()
{
    int num1;
    int num2;

    std::cout << "enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int max;
    if (num1 > num2)
    {
        max = num1;
    } else if (num2 > num1)
    {
        max = num2;
    } 
    std::cout << "max = " << max << std::endl;
}