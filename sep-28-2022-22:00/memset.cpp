#include <iostream>

void memset(void* ptr, char ch, size_t count);

int main()
{
    char arr[] = "Hello";
    char ch = 'd';
    size_t num = 6;
    memset(arr, ch, num);
    std::cout << arr << std::endl;
    return 0;
}

void memset(void* ptr, char ch, size_t count)
{
    int i = 0;
    while (i != count)
    {
        *(char*)(ptr + i) = ch;
        ++i;
    }
}