/*
Problem: Sokhna Road Toll

Description:
The program simulates toll collection on Sokhna road for 7 days.
Each vehicle pays depending on its type (Private=5, Pick-up=10, Truck=25).
The program calculates the income for each day, finds the day with the
highest income, and the day with the lowest number of trucks.
*/

#include <iostream>
using namespace std;

int main()
{
    int nCar;
    char tCar;

    double cost;
    double maxIncome = -9999;

    int maxDay = 0;

    int trucks;
    int minTrucks = 9999;
    int minDay = 0;

    for(int day = 1; day <= 7; day++)
    {
        cin >> nCar;

        cost = 0;
        trucks = 0;

        for(int i = 1; i <= nCar; i++)
        {
            cin >> tCar;

            if(tCar == 'P')
                cost += 5;

            if(tCar == 'U')
                cost += 10;

            if(tCar == 'T')
            {
                cost += 25;
                trucks++;
            }
        }

        if(cost > maxIncome)
        {
            maxIncome = cost;
            maxDay = day;
        }

        if(trucks < minTrucks)
        {
            minTrucks = trucks;
            minDay = day;
        }
    }

    cout << "Day with largest income = " << maxDay << endl;
    cout << "Day with lowest trucks = " << minDay << endl;

    return 0;
}