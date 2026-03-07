/*
Program: Customer Service Analysis
Description: Reads customer data for 30 days, calculates daily income,
counts customer types, and finds the maximum service + waiting time.
*/
#include <iostream>
using namespace std;

int main()
{
    int days = 30;      // number of days
    int maxTime = 0;    // maximum (service + waiting) time

    for (int d = 1; d <= days; d++)
    {
        int numCustomers;
        cout << "Enter number of customers for day " << d << ": ";
        cin >> numCustomers;

        int kids = 0;
        int men = 0;
        int dailyIncome = 0;

        // process customers for the day
        for (int i = 0; i < numCustomers; i++)
        {
            char type;
            int duration, waiting, price;

            cin >> type >> duration >> waiting >> price;

            int totalTime = duration + waiting;

            if (totalTime > maxTime)
                maxTime = totalTime;

            if (type == 'K')
                kids++;
            else if (type == 'M')
                men++;

            dailyIncome += price;
        }

        // print income only if kids > men
        if (kids > men)
        {
            cout << "Income for day " << d << " = " << dailyIncome << endl;
        }
    }

    cout << "Maximum time (service + waiting) = " << maxTime << endl;

    return 0;
}
