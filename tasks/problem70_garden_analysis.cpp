
Description:
This program processes data for 30 gardens.
For each garden, it reads pool dimensions, pool price per meter,
number of trees, and price per tree.

It determines:
1) The most expensive garden.
2) Number of pools with area greater than 20.
*/

#include <iostream>
using namespace std;

int main()
{
    int W, L, Ppol, t, Pt;
    int ct = 0, pos = 0;
    double S, cost, max = -9999;

    for(int i = 1; i <= 30; i++)
    {
        cin >> W >> L >> Ppol >> t >> Pt;

        S = W * L;

        cost = (Pt * t) + (Ppol * S);

        if(cost > max)
        {
            max = cost;
            pos = i;
        }

        if(S > 20)
            ct++;
    }

    cout << pos << endl;
    cout << ct << endl;

    return 0;
}