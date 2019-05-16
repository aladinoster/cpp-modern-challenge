/*
Write a program that prints all the sexy prime pairs up to a limit entered by the user.
*/

#include <iostream>

bool is_prime(int const num)
{
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        // AKS Test! my respect for this!
        for (int i = 5; i * i <= num; i += 6) // 6k + 1 is a prime number "generator" except for 2 and 3
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int limit;

    std::cout << "Enter a n upper bound: ";
    std::cin >> limit;

    for (int i = 2; i < limit; i++)
    {
        if (is_prime(i) && is_prime(i + 6))
        {
            std::cout << "Pair found: (" << i << "," << i + 6 << ")" << std::endl;
        }
    }
    return 0;
}
