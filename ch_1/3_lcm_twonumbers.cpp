/* 
Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.
*/
#include <iostream>
// using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number_1, number_2, lcm;
    std::cout << "Please enter number 1: " << std::endl;
    std::cin >> number_1;
    std::cout << "Please enter number 2: " << std::endl;
    std::cin >> number_2;

    lcm = number_1 > number_2 ? number_1 : number_2;

    do
    {
        if (lcm % number_1 == 0 && lcm % number_2 == 0)
        {
            std::cout << "The least common multiple is: " << lcm << std::endl;
            break;
        }
        else
            lcm++;
    } while (true);

    return 0;
}
