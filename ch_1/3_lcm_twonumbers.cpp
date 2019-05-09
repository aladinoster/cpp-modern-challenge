/* 
Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.
*/
#include <iostream>
// using namespace std;

int isprime(unsigned int a)
{
    unsigned int i = 2;
    while (i <= a)
    {
        if (a % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number_1, number_2;
    std::cout << "Please enter number 1: " << std::endl;
    std::cin >> number_1;
    std::cout << "Please enter number 2: " << std::endl;
    std::cin >> number_2;

    for (unsigned int i = 2; isprime(i); i++)
    {
        std::cout << i;
    }
    return 0;
}
