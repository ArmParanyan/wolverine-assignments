#include <iostream>
#include <string>

std::string ltrim(std::string&);

int main()
{
    std::string str = "  hello    ";
    std::string res = ltrim(str);

    for (int i = 0; i < res.size(); ++i)
    {
        std::cout << res[i];
    }
    return 0;
}

std::string ltrim(std::string& str)
{
    for (int i = 0; str[i] == ' '; ++i)
    {
        str.erase(i, 1);
        --i;
    }

    return str;
}
