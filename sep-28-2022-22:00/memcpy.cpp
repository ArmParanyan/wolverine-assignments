#include <iostream>
#include <cstring>

void memcpy(char* src, char* dest, size_t);

int main()
{
    char arr[] = "hello";
    char arr2[6] {};
    memcpy(arr, arr2, 5);
    std::cout << arr2 << std::endl;
    return 0;
}

void memcpy(char* src, char* dest, size_t count)
{
    if (count <= strlen(src))
    {
        for (int i = 0; i < count; ++i)
        {
            *(dest + i) = *(src + i);
        }
    }
    return;
}