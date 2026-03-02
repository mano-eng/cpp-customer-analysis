#include <iostream>
using namespace std;

int main()
{
    int nD;
    cin >> nD;

    int minDay = 1;
    int minVitaminD = -1;

    int prevClients = -1;
    int sameDaysCount = 0;

    for (int d = 1; d <= nD; d++)
    {
        int clients;
        cin >> clients;

        int totalVitaminD = 0;
        int sumAgeCOnly = 0;
        int countCOnly = 0;

        for (int i = 0; i < clients; i++)
        {
            int age, vitC, vitD;
            cin >> age >> vitC >> vitD;
       
            totalVitaminD += vitD;

            
            if (vitC > 0 && vitD == 0)
            {
                sumAgeCOnly += age;
                countCOnly++;
            }
        }

        
        if (d == 1 || totalVitaminD < minVitaminD)
        {
            minVitaminD = totalVitaminD;
            minDay = d;
        }

        if (countCOnly > 0)
            cout << "Day " << d << " Average age (C only) = "
                 << (double)sumAgeCOnly / countCOnly << endl;
        else
            cout << "Day " << d << " Average age (C only) = 0" << endl;

      
        if (d > 1 && clients == prevClients)
            sameDaysCount++;

        prevClients = clients;
    }

    cout << "Day with lowest Vitamin D sales = " << minDay << endl;
    cout << "Number of successive days with same clients = "
         << sameDaysCount << endl;

    return 0;
}