#include <iostream>
using namespace std;

/*
Processes bus data across multiple days and stations.
Counts stations where exiting passengers exceed entering.
Determines the day with the highest total passengers.
*/

int main()
{
    int ND, NS, in, out;
    int ct, pos = 0, total, max = -9999;
    double price;

    cin >> ND >> price;

    for(int d = 1; d <= ND; d++)
    {
        cin >> NS;
        ct = 0;
        total = 0;

        for(int i = 1; i <= NS; i++)
        {
            cin >> out >> in;
            if(out > in) ct++;   // count condition
            total += in;         // accumulate passengers
        }

        cout << ct << endl;

        if(total > max)
        {
            max = total;
            pos = d;
        }
    }

    cout << pos << endl;
    return 0;
}