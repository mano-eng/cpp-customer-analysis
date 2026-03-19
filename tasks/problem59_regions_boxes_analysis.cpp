#include <iostream>
using namespace std;

/*
Reads regions and boxes.
Finds:
1. Region with max boxes
2. Count of regions having box size > 20
*/

int main()
{
    int NR, NB;
    double h, w, l, s;

    int max = -9999, pos = 0;
    int ct = 0;

    cin >> NR;

    for (int i = 0; i < NR; i++)
    {
        cin >> NB;

        if (NB > max)
        {
            max = NB;
            pos = i + 1;
        }

        bool found = false;

        for (int j = 0; j < NB; j++)
        {
            cin >> h >> w >> l;

            s = h * w * l;

            if (s > 20)
                found = true;
        }

        if (found)
            ct++;
    }

    cout << pos << endl;
    cout << ct << endl;

    return 0;
}