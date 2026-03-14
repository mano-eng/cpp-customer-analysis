/*
Problem: Cinema Hall Usage Analysis

Description:
The program reads data for N cinema halls. For each hall it reads
the capacity and the number of reserved chairs for 30 days.
It determines the day with the maximum usage ratio and the day
and hall with the minimum usage ratio.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cap;
    int r;

    double rt;

    double max = -9999;
    double min = 9999;

    int pos1 = 0;
    int pos2 = 0;
    int hall = 0;

    for(int h = 1; h <= N; h++)
    {
        cin >> cap;

        for(int d = 1; d <= 30; d++)
        {
            cin >> r;

            rt = (double)r / cap;

            if(rt > max)
            {
                max = rt;
                pos1 = d;
            }

            if(rt < min)
            {
                min = rt;
                pos2 = d;
                hall = h;
            }
        }
    }

    cout << pos1 << endl;
    cout << "The lowest day is: day " << pos2 << " at hall " << hall << endl;

    return 0;
}
