/* 
Problem 064

Description:
Finds special positions in arrays, copies odd values into new arrays,
calculates averages, and applies multiple transformations on datasets.
*/

#include <iostream>
using namespace std;

// ================= Find And Copy =================
void findAndCopy(int X[], int Y[], int n, int &pos1, int &pos2)
{
    int ct = 0;

    // find first 2 cells
    for(int i = 0; i < n; i++)
    {
        if(X[i] == i * 2)
        {
            if(ct == 0)
            {
                pos1 = i;
                ct++;
            }
            else
            {
                pos2 = i;
                break;
            }
        }
    }

    // fill Y with -1
    for(int i = 0; i < n; i++)
        Y[i] = -1;

    // copy odd values from left part
    int j = 0;

    for(int i = 0; i < pos1; i++)
    {
        if(X[i] % 2 != 0)
        {
            Y[j] = X[i];
            j++;
        }
    }

    // put found cells
    Y[pos1] = X[pos1];
    Y[pos2] = X[pos2];

    // copy odd values from right part
    j = pos2 + 1;

    for(int i = pos2 + 1; i < n; i++)
    {
        if(X[i] % 2 != 0)
        {
            Y[j] = X[i];
            j++;
        }
    }
}

// ================= average between found cells =================
float avgBetweenFound(int X[], int pos1, int pos2)
{
    int sum = 0;
    int ct = 0;

    for(int i = pos1 + 1; i < pos2; i++)
    {
        sum += X[i];
        ct++;
    }

    if(ct == 0)
        return 0;

    return (float)sum / ct;
}

// ================= average positive =================
float avgPositive(int A[], int n)
{
    int sum = 0;
    int ct = 0;

    for(int i = 0; i < n; i++)
    {
        if(A[i] > 0)
        {
            sum += A[i];
            ct++;
        }
    }

    if(ct == 0)
        return 0;

    return (float)sum / ct;
}

// ================= add to all =================
void addToAll(int A[], int n, float val)
{
    for(int i = 0; i < n; i++)
        A[i] += val;
}

// ================= add to negative =================
void addToNegative(int A[], int n, float val)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i] < 0)
            A[i] += val;
    }
}

// ================= main =================
int main()
{
    int X[200], Y[200];
    int Q[600], Z[600], W[600];

    int pos1, pos2;

    float a1, a2;

    // ================= STEP 1 =================
    for(int i = 0; i < 200; i++)
        cin >> X[i];

    findAndCopy(X, Y, 200, pos1, pos2);

    a1 = avgBetweenFound(X, pos1, pos2);

    a2 = avgPositive(Y, 200);

    addToAll(Y, 200, a1);

    addToAll(Y, 200, a2);

    // ================= STEP 2 =================
    for(int i = 0; i < 600; i++)
        cin >> Q[i];

    findAndCopy(Q, Z, 600, pos1, pos2);

    addToAll(Z, 600, a1);

    a1 = avgBetweenFound(Q, pos1, pos2);

    a2 = avgPositive(Z, 600);

    addToAll(Z, 600, a1);

    addToAll(Z, 600, a2);

    // ================= STEP 3 =================
    for(int i = 0; i < 600; i++)
        cin >> W[i];

    findAndCopy(W, Q, 600, pos1, pos2);

    a1 = avgBetweenFound(W, pos1, pos2);

    a2 = avgPositive(Q, 600);

    addToNegative(Q, 600, a1);

    addToNegative(Q, 600, a2);

    // ================= STEP 4 =================
    for(int i = 0; i < 200; i++)
        cin >> Y[i];

    findAndCopy(Y, X, 200, pos1, pos2);

    // ================= STEP 5 =================
    for(int i = 0; i < 600; i++)
        cin >> Q[i];

    findAndCopy(Q, W, 600, pos1, pos2);

    // ================= STEP 6 =================
    for(int i = 0; i < 200; i++)
        cin >> X[i];

    findAndCopy(X, Y, 200, pos1, pos2);

    a1 = avgBetweenFound(X, pos1, pos2);

    a2 = avgPositive(Y, 200);

    addToAll(Y, 200, a1);

    addToAll(Y, 200, a2);

    return 0;
}
