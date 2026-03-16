#include <iostream>
using namespace std;

int main()
{
    int prev, current;
    int ct1=0, ct2=0;
    int sum1=0, sum2=0;
    float avg1, avg2;

    cin >> prev;

    for(int i=1;i<12;i++)
    {
        cin >> current;

        if(current > prev)
        {
            ct1++;
            sum1 += (current - prev);
        }
        else if(current < prev)
        {
            ct2++;
            sum2 += (prev - current);
        }

        prev = current;
    }

    avg1 = sum1 / ct1;
    avg2 = sum2 / ct2;

    cout << ct1 << endl;
    cout << ct2 << endl;
    cout << avg1 << endl;
    cout << avg2 << endl;

    return 0;
}
