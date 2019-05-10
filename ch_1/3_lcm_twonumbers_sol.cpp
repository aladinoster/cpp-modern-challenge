/* 
Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.
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
int lcm(int const a, int const b)
{
    int h = gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number_1, number_2;
    std::cout << "Please enter number 1: " << std::endl;
    std::cin >> number_1;
    std::cout << "Please enter number 2: " << std::endl;
    std::cin >> number_2;

    std::cout << "The least common multiple is: " << lcm(number_1, number_2) << std::endl;
    return 0;
}
