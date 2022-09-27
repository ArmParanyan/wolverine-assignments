#include <iostream>
#include <string>

std::string rtrim(std::string&);

int main()
{
    std::string str = "hello    ";
    std::string res = rtrim(str);

    for (int i = 0; i < res.size(); ++i)
    {
        std::cout << res[i];
    }
    return 0;
}

std::string rtrim(std::string& str)
{
    int i = str.size() - 1;
    while (str[i] == ' ')
    {
        str.erase(i, 1);
        --i;
    }
    return str;
}