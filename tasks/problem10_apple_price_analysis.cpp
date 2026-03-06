/*
Program: Apple Price Analysis

Description:
This program reads the information of 3 apple purchases.
For each purchase the user enters:
- The price of 1 kilogram of apples.
- The number of apples in that kilogram.

The program calculates:
1) The price of one apple in each purchase.
2) The average price of one apple across the three purchases.
*/

#include <iostream>
using namespace std;

int main()
{
    int priceKg, numApples;   // price of 1 Kg and number of apples
    float priceApple;         // price of one apple
    float sum = 0;            // sum of apple prices
    float average;            // average price

    // loop for the 3 purchases
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter price of 1 Kg and number of apples: ";
        cin >> priceKg >> numApples;

        // calculate price of one apple
        priceApple = (float)priceKg / numApples;

        // display price of one apple
        cout << "Price of 1 apple = " << priceApple << endl;

        // add to sum
        sum += priceApple;
    }

    // calculate average price
    average = sum / 3;

    // display average
    cout << "Average price of 1 apple = " << average << endl;

    return 0;
}