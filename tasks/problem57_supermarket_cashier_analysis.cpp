#include <iostream>
using namespace std;

/*
Simulates cashier work over 30 days with time constraint (480 minutes).
Calculates average cost for ATM payments per day.
Determines the day with the highest number of customers.
*/

int main()
{
    int type, t;
    double cost;

    int customers, max = -9999, pos = 0;
    double sum, ave;
    int ct;

    for(int d = 1; d <= 30; d++)
    {
        int total_time = 0;
        customers = 0;
        sum = 0;
        ct = 0;

        while(total_time < 480)
        {
            cin >> cost >> type >> t;

            total_time += t;
            customers++;

            if(type == 2)
            {
                sum += cost;      // ATM payments only
                ct++;
            }
        }

        if(ct != 0)
            ave = sum / ct;
        else
            ave = 0;

        cout << ave << endl;

        if(customers > max)
        {
            max = customers;
            pos = d;             // track max customers day
        }
    }

    cout << pos << endl;

    return 0;
}