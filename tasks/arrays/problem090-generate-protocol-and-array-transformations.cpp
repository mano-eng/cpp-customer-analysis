/* 
Problem 090

Description:
Generates arrays using a protocol based on -1 values,
calculates minimum even and maximum odd values,
then applies multiple transformations and generations.
*/

#include <iostream>
using namespace std;

// =========================================
// generate array according to protocol
// =========================================
void generateProtocol(int X[], int Y[], int size)
{
    int j = 0;

    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(X[i] == -1)
        {
            count++;

            for(int k = 1; k <= count; k++)
            {
                Y[j] = X[i + k];

                j++;
            }
        }
    }

    // fill remaining cells with Y[0]
    while(j < size)
    {
        Y[j] = Y[0];

        j++;
    }
}

// =========================================
// minimum of even values
// =========================================
int minEven(int arr[], int size)
{
    int min = 9999999;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
    }

    return min;
}

// =========================================
// maximum of odd values
// =========================================
int maxOdd(int arr[], int size)
{
    int max = -9999999;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
    }

    return max;
}

// =========================================
// add value to all cells
// =========================================
void addToAll(int arr[], int size, int val)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] += val;
    }
}

// =========================================
// read array normally
// =========================================
void readArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// =========================================
// read array by 29 cells then -1
// =========================================
void readArrayWith29(int arr[], int size)
{
    int i = 0;

    int count = 0;

    while(i < size)
    {
        if(count == 29)
        {
            arr[i] = -1;

            count = 0;
        }
        else
        {
            cin >> arr[i];

            count++;
        }

        i++;
    }
}

int main()
{
    int X[300];
    int Y[300];
    int Q[300];
    int W[300];
    int Z[300];
    int A[300];

    int a1, a2;

    // =========================================
    // read X
    // =========================================
    readArray(X, 300);

    // =========================================
    // generate Y from X
    // =========================================
    generateProtocol(X, Y, 300);

    // =========================================
    // calculations
    // =========================================
    a1 = minEven(Y, 300);

    a2 = maxOdd(X, 300);

    // =========================================
    // add values
    // =========================================
    addToAll(X, 300, a1);

    addToAll(X, 300, a2);

    // =========================================
    // generate Q from X
    // =========================================
    generateProtocol(X, Q, 300);

    // =========================================
    // read W
    // =========================================
    readArrayWith29(W, 300);

    // =========================================
    // generate Q from W
    // =========================================
    generateProtocol(W, Q, 300);

    // =========================================
    // calculations
    // =========================================
    a1 = minEven(Q, 300);

    a2 = maxOdd(W, 300);

    // =========================================
    // add values
    // =========================================
    addToAll(W, 300, a1);

    addToAll(W, 300, a2);

    // =========================================
    // generate Y from W
    // =========================================
    generateProtocol(W, Y, 300);

    // =========================================
    // calculations
    // =========================================
    a1 = minEven(Y, 300);

    // =========================================
    // add values
    // =========================================
    addToAll(W, 300, a1);

    // =========================================
    // generate X from W
    // =========================================
    generateProtocol(W, X, 300);

    // =========================================
    // read new X
    // =========================================
    readArray(X, 300);

    // =========================================
    // generate Q from X
    // =========================================
    generateProtocol(X, Q, 300);

    // =========================================
    // calculations
    // =========================================
    a1 = minEven(Q, 300);

    a2 = maxOdd(X, 300);

    // =========================================
    // add values
    // =========================================
    addToAll(X, 300, a1);

    addToAll(X, 300, a2);

    // =========================================
    // generate Y from X
    // =========================================
    generateProtocol(X, Y, 300);

    // =========================================
    // calculations
    // =========================================
    a1 = minEven(Y, 300);

    // =========================================
    // add values
    // =========================================
    addToAll(X, 300, a1);

    // =========================================
    // generate Q from X
    // =========================================
    generateProtocol(X, Q, 300);

    // =========================================
    // read Z
    // =========================================
    readArrayWith29(Z, 300);

    // =========================================
    // generate Y from Z
    // =========================================
    generateProtocol(Z, Y, 300);

    // =========================================
    // read A
    // =========================================
    readArrayWith29(A, 300);

    // =========================================
    // generate Q from A
    // =========================================
    generateProtocol(A, Q, 300);

    return 0;
}