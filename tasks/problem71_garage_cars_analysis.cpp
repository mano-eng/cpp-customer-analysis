/*
Problem 71.cpp - Garage Cars Analysis

Reads number of floors and days.
For each day, finds the floor with max cars,
and counts days where total cars < 100.
*/

#include <iostream>
using namespace std;

int main()
{
    int nF, nD;
    cin >> nF >> nD;

    int ct = 0;

    for(int i = 1; i <= nD; i++)
    {
        int max = -9999, pos = 0;
        int sum = 0;

        for(int j = 1; j <= nF; j++)
        {
            int cars;
            cin >> cars;

            sum += cars;

            if(cars > max)
            {
                max = cars;
                pos = j;
            }
        }

        cout << pos << endl;

        if(sum < 100)
            ct++;
    }

    cout << ct << endl;

    return 0;
}