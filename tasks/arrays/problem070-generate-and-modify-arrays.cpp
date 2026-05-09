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
    int k = 0;

    // ===== copy intervals =====
    int i = 0;

    while(i < n)
    {
        if(X[i] == -1)
        {
            int start = i;
            int ct = 0;

            // count contiguous -1
            while(i < n && X[i] == -1)
            {
                ct++;
                i++;
            }

            int end = i - 1;

            // لو interval
            if(ct >= 3)
            {
                for(int j = start; j <= end; j++)
                {
                    Z[k] = Y[j];
                    k++;
                }
            }
        }
        else
        {
            i++;
        }
    }

    // ===== get max outside intervals =====
    int maxVal = Y[0];

    for(int i = 0; i < n; i++)
    {
        int inside = 0;

        if(X[i] == -1)
        {
            int ct = 0;

            for(int j = i; j < n; j++)
            {
                if(X[j] == -1)
                {
                    ct++;
                }
                else
                {
                    break;
                }
            }

            if(ct >= 3)
            {
                inside = 1;
            }
        }

        // white region
        if(inside == 0)
        {
            if(Y[i] > maxVal)
            {
                maxVal = Y[i];
            }
        }
    }

    // ===== fill remaining =====
    while(k < n)
    {
        Z[k] = maxVal;
        k++;
    }
}

// ================= count -1 =================
int countNeg1(int X[], int n)
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

// ================= add first quarter =================
void addFirstQuarter(int X[], int n, int val)
{
    for(int i = 0; i < n / 4; i++)
    {
        X[i] += val;
    }
}

// ================= add last quarter =================
void addLastQuarter(int X[], int n, int val)
{
    for(int i = (3 * n) / 4; i < n; i++)
    {
        X[i] += val;
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

// ================= main =================
int main()
{
    int X[300], Y[300], Z[300], Q[300];
    int W[500], T[500], R[500];

    int a1, a2;

    // ===== read X =====
    for(int i = 0; i < 300; i++)
    {
        cin >> X[i];
    }

    // ===== read Y =====
    for(int i = 0; i < 300; i++)
    {
        cin >> Y[i];
    }

    // ===== generate Z =====
    generateArray(X, Y, Z, 300);

    // ===== count =====
    a1 = countNeg1(X, 300);
    a2 = countNeg1(Y, 300);

    // ===== add =====
    addLastQuarter(Z, 300, a1);
    addFirstQuarter(Z, 300, a2);

    // ===== generate Q =====
    generateArray(X, Y, Q, 300);

    // ===== read W =====
    for(int i = 0; i < 500; i++)
    {
        cin >> W[i];
    }

    // ===== read T =====
    for(int i = 0; i < 500; i++)
    {
        cin >> T[i];
    }

    // ===== generate R =====
    generateArray(W, T, R, 500);

    // ===== count =====
    a1 = countNeg1(T, 500);

    // ===== add =====
    addLastQuarter(R, 500, a1);
    addFirstQuarter(R, 500, a1);

    // ===== read new first half of W =====
    readFirstHalf(W, 500);

    // ===== read new second half of T =====
    readSecondHalf(T, 500);

    // ===== generate R again =====
    generateArray(W, T, R, 500);

    // ===== count =====
    a1 = countNeg1(T, 500);
    a2 = countNeg1(W, 500);

    // ===== add =====
    addLastQuarter(R, 500, a1);
    addFirstQuarter(R, 500, a2);

    // ===== read new first half of X =====
    readFirstHalf(X, 300);

    // ===== read new second half of Y =====
    readSecondHalf(Y, 300);

    // ===== generate Q again =====
    generateArray(X, Y, Q, 300);

    // ===== count =====
    a1 = countNeg1(Y, 300);
    a2 = countNeg1(X, 300);

    // ===== add =====
    addLastQuarter(Q, 300, a1);
    addFirstQuarter(Q, 300, a2);

    return 0;
}
