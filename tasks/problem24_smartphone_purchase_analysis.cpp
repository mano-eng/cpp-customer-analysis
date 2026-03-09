/*
Problem 24: Smartphone Purchase Analysis

Description:
The program reads information for 3000 smartphone purchases.
For each purchase, the user enters the phone type, whether a
touch pen is included, and the size of the memory card.

Phone prices:
Type 1 = 1500 L.E
Type 2 = 2300 L.E

Touch pen price = 80 L.E

Memory card price:
1 GB = 10 L.E

The program counts how many phones include a touch pen
and determines the cheapest phone price.
*/

#include <iostream>
using namespace std;

int main()
{
    int type, memory;
    char pen;

    int countPen = 0;
    double minPrice = 999999;
    double cost;

    for(int i = 0; i < 3000; i++)
    {
        cin >> type;

        if(type == 1)
            cost = 1500;
        else
            cost = 2300;

        cin >> pen;

        if(pen == 'y')
        {
            cost += 80;
            countPen++;
        }

        cin >> memory;

        cost += memory * 10;

        if(cost < minPrice)
            minPrice = cost;
    }

    cout << "Phones with touch pen = " << countPen << endl;
    cout << "Cheapest phone price = " << minPrice << endl;

    return 0;
}