/*
Write a program that prints the list of all pairs of amicable numbers smaller than 1,000,000.

Two numbers are said to be amicable if the sum of the proper divisors of one number is equal 
to that of the other number

The proper divisors of a number are the positive prime factors of the number other than 
the number itself

*/

#include <iostream>
#include <cmath>

int sum_proper_divisors(int const number)
{
    int result = 1;
    for (int i = 2; i <= std::sqrt(number); i++)
    {
        if (number % i == 0)
        {
            /* i, divides the number, then i and num/i are both divisors.
                if they are equal, we add only i because proper divisors 
                must only be added once.
            */
            result += (i == (number / i)) ? i : (i + number / i);
        }
    }
    return result;
}

void print_amicable(int const n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int a = sum_proper_divisors(i);
        int b = sum_proper_divisors(n - i);
        if (a == b)
        {
            std::cout << "Amicable numbers : (" << i << "," << n - i << ")" << std::endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 1000000;
    void print_amicable(int const n);
}
