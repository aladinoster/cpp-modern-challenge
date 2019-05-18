/*
Write a program that prints all Armstrong numbers with three digits

Armstrong number (named so after Michael F. Armstrong), also called a narcissistic number,
is a number that is equal to the sum of its own digits when they are raised to the power of the number 
of digits.

the smallest Armstrong number is 153, which is equal to 1*1*1 + 5*5*5 + 3*3*3
*/
#include <iostream>

void print_narcissistics()
{
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                auto abc = a * 100 + b * 10 + c;
                auto arm = a * a * a + b * b * b + c * c * c;
                if (abc == arm)
                {
                    std::cout << arm << std::endl;
                }
            }
        }
    }
}
int main()
{
    print_narcissistics();
}