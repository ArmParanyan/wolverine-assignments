#include <iostream>
#include <string>

std::string toLowerCase(std::string&);

int main()
{
    std::string str = "HeLlO";
    std::string res = toLowerCase(str);
    std::cout << res << std::endl;
    return 0;
}

std::string toLowerCase(std::string& str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] +=32;
        }
    }
    return str;
}
