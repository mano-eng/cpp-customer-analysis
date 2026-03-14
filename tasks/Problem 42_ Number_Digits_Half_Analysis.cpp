/*
Problem 42: Number Digits Half Analysis

Description:
Write a program that reads an integer value (V) from the user.

The program checks the following conditions:
1) All digits in the first half of the number must be odd.
2) All digits in the second half of the number must be even.

Note:
- The number of digits is assumed to be even.

If both conditions are satisfied, display:
TRUE

Otherwise display:
FALSE
*/

#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V; // read the number

    int n = V;
    int dig = 0;

    // count number of digits
    while(n != 0)
    {
        dig++;
        n = n / 10;
    }

    int half = dig / 2; // half of digits

    int oddCount = 0;   // count odd digits
    int evenCount = 0;  // count even digits

    n = V; // restore the number

    // loop through all digits
    for(int i = 1; i <= dig; i++)
    {
        int d = n % 10; // get last digit

        // first half should be odd
        if(i <= half && d % 2 == 1)
            oddCount++;

        // second half should be even
        if(i > half && d % 2 == 0)
            evenCount++;

        n = n / 10; // remove last digit
    }

    // final check
    if(oddCount == half && evenCount == half)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}