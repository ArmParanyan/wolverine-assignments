#include <iostream>

void loop(int, int tmp = 0);

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    loop(num);

    return 0;
}

void loop(int num, int tmp)
{

    if (num == 0)
    {
        return;
    }
    std::cout << tmp << ' ';
    if (num > 0)
    {
        loop(num - 1, tmp + 1);
        
    } else if (num < 0)
    {
        loop(num + 1, tmp - 1);
    }
}