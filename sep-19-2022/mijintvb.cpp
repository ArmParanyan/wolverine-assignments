#include <iostream>

int main()
{
    int num1;
    int num2;
    int num3;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter third number: ";
    std::cin >> num3;

    int sum = num1 + num2 + num3;
    std::cout << "Mijin tvabanakan@ = " << sum / 3 << std::endl;

    return 0;
}