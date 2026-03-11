/*
Problem 32: Olive Farm Income Analysis

Description:
This program reads information for N olive farms.

For each farm the program reads:
1) The number of kilograms of harvested olives.
2) The number of kilograms of oil produced.
3) The price of one kilogram of oil in the market.

The program determines:
- The average amount of produced oil (kg) only for farms that harvested
  more than 2000 kilograms of olives.
- The farm that achieved the largest income.

Income of a farm = produced oil (kg) * price per kg.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // number of olive farms

    int oliveKg;     // harvested olives (kg)
    int oilKg;       // produced oil (kg)
    double price;    // price per kg of oil

    double totalOil = 0; // sum of oil for farms with olives > 2000
    int count = 0;       // number of farms satisfying the condition

    double maxIncome = 0;
    int farmPosition = 0;

    for(int i = 1; i <= N; i++)
    {
        // Read farm data
        cin >> oliveKg;
        cin >> oilKg;
        cin >> price;

        // Calculate income
        double income = oilKg * price;

        // Check farms with harvested olives > 2000
        if(oliveKg > 2000)
        {
            totalOil += oilKg;
            count++;
        }

        // Find farm with the largest income
        if(income > maxIncome)
        {
            maxIncome = income;
            farmPosition = i;
        }
    }

    // Calculate average oil
    double averageOil = totalOil / count;

    cout << "Average produced oil = " << averageOil << endl;
    cout << "Farm with largest income = " << farmPosition << endl;

    return 0;
}