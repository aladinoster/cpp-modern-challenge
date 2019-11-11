/*
    Collatz sequence 

    The n series is defined as follows: 

    1. Start with any positive integer n and obtain each new term from the previous one as

        - if the previous term is even: the next term is half of the previous term 
        - it is 3 times the prvious term plus 1
*/

#include <vector>
#include <iostream>
#include <utility>

std::pair<unsigned long long, long> longest_collatz(
    unsigned long long const limit)
{
    long length = 0;
    unsigned long long number = 0;
    std::vector<int> cache(limit + 1, 0);
    for (unsigned long long i = 2; i <= limit; i++)
    {
        auto n = i;
        long steps = 0;
        while (n != 1 && n >= i)
        {
            if ((n % 2) == 0)
                n = n / 2;
            else
                n = n * 3 + 1;
            steps++;
        }
        cache[i] = steps + cache[n];

        if (cache[i] > length)
        {
            length = cache[i];
            number = i;
        }
    }
    return std::make_pair(number, length);
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::pair collatp = longest_collatz(i);
        std::cout << collatp.first << "\t" << collatp.second << std::endl;
    }
}