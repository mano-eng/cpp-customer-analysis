/* 
Problem 105

Description:
Generates arrays based on averages
of left and right regions outside [S:E],
then processes odd counts in both halves.
*/

#include <iostream> 
using namespace std; 

// ================= BOX 1 =================
// read array
void readArray(int arr[], int size) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        cin >> arr[i]; 
    } 
} 

// ================= BOX 2 =================
// generate protocol
void generateProtocol(int X[], int Y[], int size, int S, int E) 
{ 
    // calculate left average
    int sumLeft = 0; 

    for(int i = 0; i < S; i++) 
    { 
        sumLeft += X[i]; 
    } 

    int avgLeft = sumLeft / S; 

    // calculate right average
    int sumRight = 0; 
    int countRight = 0; 

    for(int i = E + 1; i < size; i++) 
    { 
        sumRight += X[i]; 
        countRight++; 
    } 

    int avgRight = sumRight / countRight; 

    // fill Y with -1
    for(int i = 0; i < size; i++) 
    { 
        Y[i] = -1; 
    } 

    // middle pointers
    int half = size / 2; 
    int left = half - 1; 
    int right = half; 

    // process selected region
    for(int i = S; i <= E; i++) 
    { 
        // smaller than both averages
        if(X[i] < avgLeft && X[i] < avgRight) 
        { 
            Y[left] = X[i]; 
            left--; 
        } 

        // greater than both averages
        else if(X[i] > avgLeft && X[i] > avgRight) 
        { 
            Y[right] = X[i]; 
            right++; 
        } 
    } 
} 

// ================= BOX 3 =================
// count odd in second half
int oddSecondHalf(int arr[], int size) 
{ 
    int count = 0; 

    for(int i = size / 2; i < size; i++) 
    { 
        if(arr[i] % 2 != 0) 
        { 
            count++; 
        } 
    } 

    return count; 
} 

// ================= BOX 4 =================
// count odd in first half
int oddFirstHalf(int arr[], int size) 
{ 
    int count = 0; 

    for(int i = 0; i < size / 2; i++) 
    { 
        if(arr[i] % 2 != 0) 
        { 
            count++; 
        } 
    } 

    return count; 
} 

// ================= BOX 5 =================
// add A to second half
void addSecondHalf(int arr[], int size, int A) 
{ 
    for(int i = size / 2; i < size; i++) 
    { 
        arr[i] += A; 
    } 
} 

// ================= BOX 6 =================
// add B to first half
void addFirstHalf(int arr[], int size, int B) 
{ 
    for(int i = 0; i < size / 2; i++) 
    { 
        arr[i] += B; 
    } 
} 

int main() 
{ 
    int X[200]; 
    int Y[200]; 

    int Z[600]; 
    int Q[600]; 

    int S, E; 
    int A, B; 

    // ================= BOX 7 =================
    readArray(X, 200); 

    cin >> S >> E; 

    generateProtocol(X, Y, 200, S, E); 

    A = oddSecondHalf(Y, 200); 
    B = oddFirstHalf(Y, 200); 

    addSecondHalf(Y, 200, A); 
    addFirstHalf(Y, 200, B); 

    // ================= BOX 8 =================
    readArray(Z, 600); 

    cin >> S >> E; 

    generateProtocol(Z, Q, 600, S, E); 

    A = oddSecondHalf(Q, 600); 
    B = oddFirstHalf(Q, 600); 

    addSecondHalf(Q, 600, A); 
    addFirstHalf(Q, 600, B); 

    // ================= BOX 9 =================
    readArray(X, 200); 

    cin >> S >> E; 

    generateProtocol(X, Y, 200, S, E); 

    A = oddSecondHalf(Y, 200); 
    B = oddFirstHalf(Y, 200); 

    addSecondHalf(Y, 200, A); 
    addFirstHalf(Y, 200, B); 

    // ================= BOX 10 =================
    readArray(Y, 200); 

    cin >> S >> E; 

    generateProtocol(Y, X, 200, S, E); 

    // ================= BOX 11 =================
    readArray(X, 200); 

    cin >> S >> E; 

    generateProtocol(X, Y, 200, S, E); 

    return 0; 
}