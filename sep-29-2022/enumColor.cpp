#include <iostream>
#include <string>
#include <map>


enum class Colors
{
    Red,
    Green,
    Black,
    Blue,
    Gray,
    Yellow
};

std::map<Colors, std::string> col;
std::map<std::string, Colors> nums;

std::string to_string(Colors obj);
Colors to_enum(std::string& str);

int main()
{
    std::string str = "Green";
    std::cout << to_string(Colors::Black) << std::endl;
    std::cout << static_cast<int>(to_enum(str)) << std::endl;

    return 0;
}

std::string to_string(Colors obj)
{
    col[Colors::Black] = "Black";
    col[Colors::Blue] = "Blue";
    col[Colors::Gray] = "Gray";
    col[Colors::Green] = "Green";
    col[Colors::Red] = "Red";
    col[Colors::Yellow]= "Yellow";
    return col[obj];
}

Colors to_enum(std::string& str)
{
    nums["Black"] = Colors::Black;
    nums["Blue"] = Colors::Blue;
    nums["Gray"] = Colors::Gray;
    nums["Green"] = Colors::Green;
    nums["Red"] = Colors::Red;
    nums["Yellow"] = Colors::Yellow;
    return nums[str];
}
