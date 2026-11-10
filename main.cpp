#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isUpper(const std::string &s)
{
    return std::all_of(s.begin(), s.end(), [](unsigned char c)
                       { return std::isupper(c); });
}
bool islower(const std::string &s)
{
    return std::all_of(s.begin(), s.end(), [](unsigned char c)
                       { return std::islower(c); });
}

int main()
{
    bool run = false;

    do
    {
        std::cout << "Please use the following:" << std::endl;
        std::cout << "- " << "!, @, #, $, %, &." << std::endl;
        std::cout << "- 1 uppercase letter" << std::endl;
        std::cout << "- 1 lowercase" << std::endl;
        std::cout << "- 2 numbers" << std::endl;
        std::cout << "- and at least a length of atleast 8." << std::endl;
        std::cout << "input password" << std::endl;
        std::string input;
        std::getline(std::cin, input);
        std::cout << isUpper(input);

        if (!isUpper)
        {
            std::cout << "Please input a password according to list"<<std::endl;

        }else {
            std::cout<< "password made"<<std::endl;
            run=true;
        }

    }while(run);
    return 0;
}