#include <iostream>
#include <string>

std::string trim(std::string& str);


int main()
{
    std::string str = "  hello    ";
    std::string res = trim(str);

    for (int i = 0; i < res.size(); ++i)
    {
        std::cout << res[i];
    }
    return 0;
}
   
   
std::string trim(std::string& str)
{
    for (int i = 0; str[i] == ' '; ++i)
    {
        str.erase(i, 1);
        --i;
    }
    int j = str.size() - 1;
    while (str[j] == ' ')
    {
        str.erase(j, 1);
        --j;
    }

    return str;
}