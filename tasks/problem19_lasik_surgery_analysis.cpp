/*
Problem 19: Lasik Surgery Cost Analysis

Description:
The program reads the doctor's cost, follow-up visits cost,
hospital cost, and age for N persons who want to perform
Lasik surgery.

It calculates the average total cost for persons with age < 20
and counts how many persons have follow-up visits cost
greater than the doctor's cost.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int doctor, followUp, hospital, age;

    int sumCost = 0;
    int countAge = 0;

    int countFollow = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> doctor;
        cin >> followUp;
        cin >> hospital;
        cin >> age;

        int totalCost = doctor + followUp + hospital;

        if(age < 20)
        {
            sumCost += totalCost;
            countAge++;
        }

        if(followUp > doctor)
            countFollow++;
    }

    double avg = 0;

    if(countAge > 0)
        avg = (double)sumCost / countAge;

    cout << "Average cost (age < 20) = " << avg << endl;
    cout << "Persons with follow up > doctor cost = " << countFollow << endl;

    return 0;
}