/*
Program: Average Difference by Divisibility

Description:
This program reads three values from the user, then reads two numbers
N and M. It calculates the average of the values divisible by N and
the average of the values divisible by M, then displays the difference
between the two averages.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;
    int N, M;

    int sumN = 0, countN = 0;
    int sumM = 0, countM = 0;

    // read N and M
    cin >> N;
    cin >> M;

    // read the 3 values
    for(int i = 0; i < 3; i++)
    {
        cin >> value;

        // values divisible by N
        if(value % N == 0)
        {
            sumN += value;
            countN++;
        }

        // values divisible by M
        if(value % M == 0)
        {
            sumM += value;
            countM++;
        }
    }

    double avgN = 0, avgM = 0;

    if(countN > 0)
        avgN = (double)sumN / countN;

    if(countM > 0)
        avgM = (double)sumM / countM;

    cout << "Difference between averages = " << avgN - avgM << endl;

    return 0;
}