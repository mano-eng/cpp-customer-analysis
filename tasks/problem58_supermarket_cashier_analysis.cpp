#include <iostream>
using namespace std;

/*
Processes jewelry stores data.

- Reads number of stores (NS)
- For each store:
    - Reads number of pieces (NP)
    - For each piece:
        * Type (1=diamond, 2=gold, 3=platinum)
        * Weight
        * Price

Program does:
1. Finds the store with minimum number of pieces
2. Calculates average weight for first 10 stores only
3. Counts stores where diamond pieces > 50
4. Finds the most expensive store (highest total price)
*/

int main()
{
    int NS, NP, t;
    double w, pce;

    int min = 9999, pos1 = 0;
    double max = -9999, pos2 = 0;

    int ct = 0;        // stores with diamond > 50
    double sum = 0;    // sum of weights (first 10 stores)
    int ctW = 0;       // count of pieces (first 10 stores)

    cin >> NS;

    for (int i = 0; i < NS; i++)
    {
        cin >> NP;

        double cost = 0;     // total price for this store
        int diamondCount = 0;

        for (int d = 0; d < NP; d++)
        {
            cin >> t >> w >> pce;

            cost += pce;

            if (t == 1)
                diamondCount++;

            if (i < 10)
            {
                sum += w;
                ctW++;
            }
        }

        if (NP < min)
        {
            min = NP;
            pos1 = i + 1;
        }

        if (diamondCount > 50)
            ct++;

        if (cost > max)
        {
            max = cost;
            pos2 = i + 1;
        }
    }

    double ave = 0;
    if (ctW != 0)
        ave = sum / ctW;

    cout << pos1 << endl;
    cout << ave << endl;
    cout << ct << endl;
    cout << pos2 << endl;

    return 0;
}