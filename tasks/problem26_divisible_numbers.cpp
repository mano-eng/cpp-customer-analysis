/*
Problem 26: Numbers Divisible by N

Description:
The program asks the user to enter a value N.
Then it reads 100 numbers from the user and
displays only the numbers that are divisible by N.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int number;

    for(int i = 0; i < 100; i++)
    {
        cin >> number;

        if(number % N == 0)
            cout << number << endl;
    }

    return 0;
}