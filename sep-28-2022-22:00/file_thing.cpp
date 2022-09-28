#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");
    std::string str = "";
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            str = "";
            fin >> str;
            for (int i = 0; i < str.size(); ++i)
            {
                if (str[i] == ',')
                {
                    str.erase(str.begin() + i);
                    --i;
                }
            }
            fout << str << std::endl;
            
        }
        
    } else
    {
        std::cout << "file is not open:";
    }
    if (fout.is_open())
    {
        
    } else
    {
        std::cout << "file is not open:";

    }
}