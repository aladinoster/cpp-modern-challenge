/* 
Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user. 
*/
#include <iostream>
// using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int limit;
    std::cout << "Please enter integer value: " << std::endl;
    std::cin >> limit;
    std::cout << "The value you entered is: " << limit << std::endl;

    unsigned long long cum = 0; // using int will overflow fast

    for (unsigned int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cum += i;
        }
    }

    std::cout << "The value of the sum is: " << cum << std::endl;
    return 0;
}