/*
Problem 35: Water Heater Specifications Analysis

Description:
This program reads the specifications for 3 water heaters.

For each heater we read:
1) Number of tubes in the heater.
2) Width of the heater.
3) Height of the heater.
4) Whether the heater includes a valve or not (1 = Yes, 0 = No).

The program performs the following:
- Counts how many heaters have number of tubes greater than 4.
- Calculates the average height of heaters that do NOT include a valve.
*/

#include <iostream>
using namespace std;

int main()
{
    int tubes;
    int width;
    int height;
    int hasValve;

    int countTubes = 0;
    int countNoValve = 0;
    int totalHeight = 0;

    for(int i = 1; i <= 3; i++)
    {
        cin >> tubes;
        cin >> width;
        cin >> height;
        cin >> hasValve;

        // Check heaters with tubes > 4
        if(tubes > 4)
        {
            countTubes++;
        }

        // Check heaters without valve
        if(hasValve == 0)
        {
            countNoValve++;
            totalHeight += height;
        }
    }

    double averageHeight = totalHeight / countNoValve;

    cout << "Heaters with tubes > 4 = " << countTubes << endl;
    cout << "Average height (without valve) = " << averageHeight << endl;

    return 0;
}