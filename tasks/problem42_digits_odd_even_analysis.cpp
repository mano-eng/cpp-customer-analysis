/*

Description:
Reads an integer V and analyzes its digits.

The program first determines the total number of digits.
Then it splits the digits into two halves (processed from right to left).

Condition:
- Digits in the first half must be odd.
- Digits in the second half must be even.

If both conditions are satisfied → prints TRUE
Otherwise → prints FALSE.

*/

#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int n = V;
    int dig = 0;

    // count number of digits
    while(n != 0)
    {
        dig++;
        n = n / 10;
    }

    int half = dig / 2;

    int oddCount = 0;
    int evenCount = 0;

    n = V;

    // analyze digits
    for(int i = 1; i <= dig; i++)
    {
        int d = n % 10;

        // first half → odd digits
        if(i <= half && d % 2 == 1)
            oddCount++;

        // second half → even digits
        if(i > half && d % 2 == 0)
            evenCount++;

        n = n / 10;
    }

    // final check
    if(oddCount == half && evenCount == half)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}