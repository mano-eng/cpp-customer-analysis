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
    cin >> N;   // number of cinema halls

    int capacity;
    int reserved;

    double ratio;

    double maxRatio = -1;
    int maxDay = 0;

    double minRatio = 999999;
    int minDay = 0;
    int minHall = 0;

    for(int h = 1; h <= N; h++)
    {
        cin >> capacity;

        for(int d = 1; d <= 30; d++)
        {
            cin >> reserved;

            ratio = (double)reserved / capacity;

            if(ratio > maxRatio)
            {
                maxRatio = ratio;
                maxDay = d;
            }

            if(ratio < minRatio)
            {
                minRatio = ratio;
                minDay = d;
                minHall = h;
            }
        }
    }

    cout << "Maximum usage day = " << maxDay << endl;
    cout << "Lowest day is: day " << minDay << " at hall " << minHall << endl;

    return 0;
}