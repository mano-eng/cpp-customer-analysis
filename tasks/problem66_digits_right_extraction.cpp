#include <iostream>
using namespace std;

// Problem 66 - Right Digits Extraction
//
// Read number N
// Then read N values from the user
// For each value:
// Take the last i digits (based on its position)
// (1st → last digit, 2nd → last 2 digits, etc.)
// Print each result on a new line

int main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int num;
        cin >> num;

        int power = 1;

        // حساب 10^i
        for(int j = 1; j <= i; j++)
        {
            power = power * 10;
        }

        int result = num % power;

        cout << result << endl;
    }

    return 0;
}