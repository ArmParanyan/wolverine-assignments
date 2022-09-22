#include <iostream>
#include <map>

int _sum(int, int);
int _div(int, int);
int _sub(int, int);
int _mul(int, int);

int main()
{
    std::map<char, int(*)(int,int)> map;
    char symb;
    int num1;
    int num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator: ";
    std::cin >> symb;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    map['+'] = _sum;
    map['-'] = _sub;
    map['/'] = _div;
    map['*'] = _mul;
    
    std::cout << map[symb](num1, num2) << std::endl;
    return 0;
}

int _sum(int num1, int num2)
{
    return num1 + num2;
}

int _div(int num1, int num2)
{
    return num1 / num2;
}

int _sub(int num1, int num2)
{
    return num1 - num2;
}

int _mul(int num1, int num2)
{
    return num1 * num2;
}