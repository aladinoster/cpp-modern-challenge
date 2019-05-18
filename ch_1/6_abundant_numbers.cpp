/*
Write a program that prints all abundant numbers and their abundance, up to a number entered by the user.

An abundant number, also known as an excessive number, is a number for which the sum of its proper divisors is greater than the number itself.

The proper divisors of a number are the positive prime factors of the number, other than the number itself.

The amount by which the sum of proper divisors exceeds the number itself is called abundance.

For instance, the number 12 has the proper divisors 1, 2, 3, 4, and 6. Their sum is 16, which makes 12 an abundant number. Its
*/

#include <iostream>

int abundancy(int a)
{
    int abndcy = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            abndcy += i;
        }
    }
    return abndcy - a;
}

int main(int argc, char const *argv[])
{
    /* code */

    int limit;

    std::cout << "Enter an upper bound: ";
    std::cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        // std::cout << i << abundancy(i) << std::endl;
        if (abundancy(i) > 0)
        {
            std::cout << "Abundance number: " << i << " Abundancy: " << abundancy(i) << std::endl;
        }
    }
    return 0;
}
