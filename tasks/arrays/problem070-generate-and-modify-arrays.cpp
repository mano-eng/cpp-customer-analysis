/* 
Problem 070

Description:
Generates arrays based on intervals of contiguous -1 values,
copies data from another array, then performs counting and
quarter-based modifications.
*/

#include <iostream>
using namespace std;

// ================= generate array =================
void generateArray(int X[], int Y[], int Z[], int n)
{
    for(int i = 0; i < n; i++)
    {
        Z[i] = -1;
    }

    int i = 0;

    while(i < n)
    {
        if(X[i] == -1)
        {
            int start = i;
            int ct = 0;

            while(i < n && X[i] == -1)
            {
                ct++;
                i++;
            }

            if(ct >= 3)
            {
                for(int j = start; j < start + ct; j++)
                {
                    Z[j] = Y[j];
                }
            }
        }
        else
        {
            i++;
        }
    }

    int maxVal = Y[0];

    for(int i = 0; i < n; i++)
    {
        if(Z[i] == -1)
        {
            if(Y[i] > maxVal)
            {
                maxVal = Y[i];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(Z[i] == -1)
        {
            Z[i] = maxVal;
        }
    }
}

// ================= count -1 =================
int countMinusOne(int X[], int n)
{
    int ct = 0;

    for(int i = 0; i < n; i++)
    {
        if(X[i] == -1)
        {
            ct++;
        }
    }

    return ct;
}

// ================= add to first quarter =================
void addFirstQuarter(int X[], int n, int value)
{
    for(int i = 0; i < n / 4; i++)
    {
        X[i] += value;
    }
}

// ================= add to last quarter =================
void addLastQuarter(int X[], int n, int value)
{
    for(int i = (3 * n) / 4; i < n; i++)
    {
        X[i] += value;
    }
}

// ================= read first half =================
void readFirstHalf(int X[], int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        cin >> X[i];
    }
}

// ================= read second half =================
void readSecondHalf(int X[], int n)
{
    for(int i = n / 2; i < n; i++)
    {
        cin >> X[i];
    }
}

// ================= print array =================
void printArray(int X[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << X[i] << " ";
    }

    cout << endl;
}

// ================= main =================
int main()
{
    int X[300], Y[300], Z[300], Q[300];
    int W[500], T[500], R[500];

    int a1, a2;

    for(int i = 0; i < 300; i++)
    {
        cin >> X[i];
    }

    for(int i = 0; i < 300; i++)
    {
        cin >> Y[i];
    }

    generateArray(X, Y, Z, 300);

    a1 = countMinusOne(X, 300);
    a2 = countMinusOne(Y, 300);

    addLastQuarter(Z, 300, a1);
    addFirstQuarter(Z, 300, a2);

    generateArray(X, Y, Q, 300);

    for(int i = 0; i < 500; i++)
    {
        cin >> W[i];
    }

    for(int i = 0; i < 500; i++)
    {
        cin >> T[i];
    }

    generateArray(W, T, R, 500);

    a1 = countMinusOne(T, 500);

    addLastQuarter(R, 500, a1);
    addFirstQuarter(R, 500, a1);

    readFirstHalf(W, 500);

    readSecondHalf(T, 500);

    generateArray(W, T, R, 500);

    a1 = countMinusOne(T, 500);
    a2 = countMinusOne(W, 500);

    addLastQuarter(R, 500, a1);
    addFirstQuarter(R, 500, a2);

    readFirstHalf(X, 300);

    readSecondHalf(Y, 300);

    generateArray(X, Y, Q, 300);

    a1 = countMinusOne(Y, 300);
    a2 = countMinusOne(X, 300);

    addLastQuarter(Q, 300, a1);
    addFirstQuarter(Q, 300, a2);

    return 0;
}