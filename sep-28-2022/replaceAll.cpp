#include <iostream>
#include <string>
#include <vector>

std::string replaceAll(std::string&, std::string&, std::string&);

int main()
{
    std::string res = "hello, world";
    std::string chr = "l";
    std::string repl = "ch";
    std::string str = replaceAll(res, chr, repl);
    std::cout << str << std::endl;
    return 0;
}

std::string replaceAll(std::string& str, std::string& chr, std::string& repl)
{
    int i = 0;
    while (i != str.size())
    {
        int pos = str.find(chr, i);
        if (pos != -1)
        {
            str.erase(str.begin() + pos, str.begin() + pos + chr.size());
            str.insert(pos, repl);
            i = pos;
        }
        ++i;
    }
    return str;
}