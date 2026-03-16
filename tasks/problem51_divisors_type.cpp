#include <iostream>
using namespace std;

int main()
{
    int v, num = 1, ct1 = 0, ct2 = 0;

    cin >> v;

    while(num < v)
    {
        if(v % num == 0)   // num divisor
        {
            if(num % 2 == 0)
                ct1++;     // even divisor
            else
                ct2++;     // odd divisor
        }

        num++;
    }

    if(ct1 > 0 && ct2 > 0)
        cout << "MIXED";

    else if(ct1 > 0)
        cout << "EVENS";

    else
        cout << "ODDS";

    return 0;
}
