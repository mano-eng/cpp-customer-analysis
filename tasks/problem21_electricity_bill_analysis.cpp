/*
Problem 21: Electricity Bill Analysis

Description:
The program reads the number of washers, number of irons,
and the monthly electricity bill for N houses.

It calculates the average electricity bill for houses
that have exactly one washer and one iron, and determines
the house with the cheapest electricity bill.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int washers, irons;
    int bill;

    int sumBills = 0;
    int count = 0;

    int minBill = 1000000;
    int cheapestHouse = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> washers;
        cin >> irons;
        cin >> bill;

        if(washers == 1 && irons == 1)
        {
            sumBills += bill;
            count++;
        }

        if(bill < minBill)
        {
            minBill = bill;
            cheapestHouse = i;
        }
    }

    double avg = 0;

    if(count > 0)
        avg = (double)sumBills / count;

    cout << "Average bill = " << avg << endl;
    cout << "House with cheapest bill = " << cheapestHouse << endl;

    return 0;
}