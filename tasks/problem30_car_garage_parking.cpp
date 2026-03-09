/*
Problem 30: Car Garage Parking Cost

Description:
In a car garage, the price of one hour is 2 L.E.
Any fraction of an hour is counted as a full hour.

The program asks 3 users to enter the entry time and exit time
of their cars in the garage.

The program will:
1) Calculate the parking price for each car.
2) Display the average price of the 3 cars.
3) Display how many cars stayed more than 5 hours.
*/

#include <iostream>
using namespace std;

int main()
{
    int entryH, entryM;
    int exitH, exitM;

    int count = 0;
    int totalPrice = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> entryH >> entryM;
        cin >> exitH >> exitM;

        int entryTotal = entryH * 60 + entryM;
        int exitTotal = exitH * 60 + exitM;

        int diff = exitTotal - entryTotal;

        int hours = diff / 60;

        if(diff % 60 != 0)
            hours++;

        int price = hours * 2;

        totalPrice += price;

        if(hours > 5)
            count++;
    }

    double avg = (double)totalPrice / 3;

    cout << "Average price = " << avg << endl;
    cout << "Cars exceeded 5 hours = " << count << endl;

    return 0;
}