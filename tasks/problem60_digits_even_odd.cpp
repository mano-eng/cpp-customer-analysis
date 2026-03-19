Description:
Given an integer with an even number of digits:

Left half → all digits must be even

Right half → all digits must be odd

If true → print TRUE
Else → print FALSE
#include <iostream>
using namespace std;

int main()
{
    long long V, num;
    int dig = 0;

    cin >> V;
    num = V;

    while(num != 0)
    {
        num /= 10;
        dig++;
    }

    int half = dig / 2;
    num = V;

    int oddct = 0, evenct = 0;

    for(int i = 1; i <= dig; i++)
    {
        int d = num % 10;

        if(i <= half && d % 2 == 1)
            oddct++;

        if(i > half && d % 2 == 0)
            evenct++;

        num /= 10;
    }

    if(oddct == half && evenct == half)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}