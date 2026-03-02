#include <iostream>
using namespace std;

int main()
{
    int days = 30;          // Number of days
    int maxTime = 0;        // Maximum (service + waiting) time
    int minFollowers = 0;   // Example variable (if needed later)

    for (int d = 1; d <= days; d++)
    {
        int numCustomers;
        cout << "Enter number of customers for day " << d << ": ";
        cin >> numCustomers;

        int kids = 0;
        int men = 0;
        int dailyIncome = 0;

        for (int i = 0; i < numCustomers; i++)
        {
            char type;      // K = Kid, M = Man
            int duration;
            int waiting;
            int price;

            cin >> type >> duration >> waiting >> price;

            int totalTime = duration + waiting;

            // Track maximum total time
            if (totalTime > maxTime)
            {
                maxTime = totalTime;
            }

            // Count customer types
            if (type == 'K')
                kids++;
            else if (type == 'M')
                men++;

            // Calculate income
            dailyIncome += price;
        }

        // Print income only if kids > men
        if (kids > men)
        {
            cout << "Income for day " << d << " = " << dailyIncome << endl;
        }
    }

    cout << "Maximum time (service + waiting) = " << maxTime << endl;

    return 0;
}
