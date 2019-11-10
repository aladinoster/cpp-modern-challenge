/*
Write a program that prints the prime factors of a number entered by the user.

The prime factors of a positive integer are the prime numbers that divide that integer exactly. 
For example 8 = 2 * 2 * 2

1. While n is divisible by 2, 2 is a prime factor and must be added to the list, while n becomes the result of n/2.

2. Iterate from 3 to the square root of n
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>

std::vector<unsigned long long> prime_factors(unsigned long long n)
{
    std::vector<unsigned long long> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (unsigned long long i = 3; i <= std::sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        factors.push_back(n);
    return factors;
}

int main()
{
    unsigned long long number = 0;
    std::cout << "number:";
    std::cin >> number;
    auto factors = prime_factors(number);
    std::copy(std::begin(factors), std::end(factors), std::ostream_iterator<unsigned long long>(std::cout, " "));
    std::cout << std::endl;
}