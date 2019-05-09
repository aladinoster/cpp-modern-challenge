/* 
Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two. 
*/
#include <iostream>
// using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b != 0)
    {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number_1, number_2;
    std::cout << "Please enter number 1: " << std::endl;
    std::cin >> number_1;
    std::cout << "Please enter number 2: " << std::endl;
    std::cin >> number_2;

    unsigned int divisor = gcd(number_1, number_2);

    std::cout << "The greatest larger divisor is: " << divisor << std::endl;
    return 0;
}