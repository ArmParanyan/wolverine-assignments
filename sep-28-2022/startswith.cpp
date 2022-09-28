#include <iostream>
#include <string>

bool endswith(std::string&, std::string&);

int main()
{
    std::string str = "hello, world";
    std::string chr = "world";
    std::cout << std::boolalpha << endswith(str, chr);
    return 0;
}

bool endswith(std::string& str, std::string& chr)
{
    bool flag = false;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == chr[i])
        {
            flag = true;
        }
        else
        {
            break;
        }
    }
    return flag;
}
