/*
Problem 53 - Lab Rats Analysis

Description:
This program processes data for N laboratories.
For each lab, it reads the number of white and brown rats,
then reads age and gender for each rat.

It calculates:
1) Number of labs where brown rats > white rats.
2) The lab index with the minimum number of male rats.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int countLabs = 0;
    int minMales = 9999;
    int pos = 0;

    for(int i = 1; i <= N; i++)
    {
        int white, brown;
        cin >> white >> brown;

        if(brown > white)
            countLabs++;

        int total = white + brown;
        int male = 0;

        for(int j = 1; j <= total; j++)
        {
            int age;
            char gender;
            cin >> age >> gender;

            if(gender == 'M')
                male++;
        }

        if(male < minMales)
        {
            minMales = male;
            pos = i;
        }
    }

    cout << "Labs with more brown rats = " << countLabs << endl;
    cout << "Lab with lowest males = " << pos << endl;

    return 0;
}