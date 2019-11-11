/*
    Convert a number to a roman number 

    1. Check every roman base symbol from the biguest (M) to the lowesst (I)
    2. If the current value is greather than teh value of the simbol, then concatenate 
       the symol to the Roman numeral and substract its value from the current one
    3. Repeat until reaching 0 

*/
#include <iostream>
#include <string>
#include <vector>

std::string to_roman(unsigned int value)
{
    std::vector<std::pair<unsigned int, char const *>> roman{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    std::string result;

    for (auto const &kvp : roman)
    {
        while (value >= kvp.first)
        {
            result += kvp.second;
            value -= kvp.first;
        }
    }
    return result;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::cout << i << "\t" << to_roman(i) << std::endl;
    }
    int number = 0;
    std::cout << "number:";
    std::cin >> number;
    std::cout << to_roman(number) << std::endl;
}