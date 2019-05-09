/* 
Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two. 
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number_1, number_2;
    cout << "Please enter number 1: " << endl;
    cin >> number_1;
    cout << "Please enter number 2: " << endl;
    cin >> number_2;

    unsigned int divisor = 1, temp = 2; // only has sense for Z+

    while (temp < number_1 && temp < number_2)
    {
        if (number_1 % temp == 0 && number_2 % temp == 0)
        {
            divisor *= temp;
        }
        temp += 1;
        // cout << divisor << endl;
    }

    cout << "The greatest larger divisor is: " << divisor << endl;
    return 0;
}