#include <iostream>
using namespace std;

/*
Analyzes beach data including detectors and their costs.
Calculates average detectors for beaches longer than 200m.
Finds the most costly beach among the last 10 entries.
*/

int main()
{
    int N, L, nd;
    double pd, pc;
    int pos = 0, ct = 0;
    double sum = 0, cost, max = -9999;

    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> L >> nd;

        cost = 0;

        for(int j = 1; j <= nd; j++)
        {
            cin >> pd >> pc;
            cost += pd + pc;     // add detector + charger cost
        }

        if(L > 200)
        {
            sum += nd;
            ct++;                // count valid beaches
        }

        if(i > N - 10)
        {
            if(cost > max)
            {
                max = cost;
                pos = i;         // track max cost beach
            }
        }
    }

    cout << sum / ct << endl;
    cout << pos << endl;

    return 0;
}