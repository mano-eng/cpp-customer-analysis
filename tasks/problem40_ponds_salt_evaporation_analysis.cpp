/*
Problem 40: Ponds Salt Evaporation Analysis

Description:
The program reads the information for N ponds.

For each pond:
- Read the area of the pond.
- Each day read the amount of water and the temperature.
- Continue reading days until the water becomes zero (pond fully evaporated).
- After evaporation read the weight of produced salt.

The program:
1) Displays the average produced salt for ponds with area > 20.
2) Displays which pond took the longest time to fully evaporate.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // number of ponds

    float area, water, temp, salt;
    int days;

    float sumSalt = 0;
    int count = 0;

    int maxDays = 0;
    int pondNumber = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> area;

        days = 0;

        cin >> water >> temp;

        while(water > 0)
        {
            days++;
            cin >> water >> temp;
        }

        cin >> salt;

        if(area > 20)
        {
            sumSalt += salt;
            count++;
        }

        if(days > maxDays)
        {
            maxDays = days;
            pondNumber = i;
        }
    }

    float average = 0;

    if(count > 0)
        average = sumSalt / count;

    cout << "Average produced salt = " << average << endl;
    cout << "Pond with longest evaporation = " << pondNumber << endl;

    return 0;
}