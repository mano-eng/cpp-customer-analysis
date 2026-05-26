/*

Problem 120

Description:
Generates a new array
using the side with the larger sum
outside the selected range,
then fills remaining cells with -1.

*/

#include <iostream> 
using namespace std; 
 
void generate(int X[], int Y[], int size, int S, int E) 
{ 
    int totL = 0; 
    int totR = 0; 
 
    // total left 
 
    for(int i = 0; i < S; i++) 
    { 
        totL += X[i]; 
    } 
 
    // total right 
 
    for(int i = E + 1; i < size; i++) 
    { 
        totR += X[i]; 
    } 
 
    int j = size - 1; 
 
    // copy larger part at end of Y 
 
    if(totL > totR) 
    { 
        for(int i = S - 1; i >= 0; i--) 
        { 
            Y[j] = X[i]; 
 
            j--; 
        } 
    } 
 
    else 
    { 
        for(int i = size - 1; i > E; i--) 
        { 
            Y[j] = X[i]; 
 
            j--; 
        } 
    } 
 
    // fill remaining by -1 
 
    while(j >= 0) 
    { 
        Y[j] = -1; 
 
        j--; 
    } 
} 
 
// add value 
 
void addVal(int arr[], int size, int val) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        arr[i] += val; 
    } 
} 
 
// read first half 
 
void readFirstHalf(int arr[], int size) 
{ 
    for(int i = 0; i < size / 2; i++) 
    { 
        cin >> arr[i]; 
    } 
} 
 
// read second half 
 
void readSecondHalf(int arr[], int size) 
{ 
    for(int i = size / 2; i < size; i++) 
    { 
        cin >> arr[i]; 
    } 
} 
 
int main() 
{ 
    int X[200]; 
    int Y[200]; 
    int Q[200]; 
 
    // read X 
 
    for(int i = 0; i < 200; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int S, E; 
 
    // first generate Y from X 
 
    cin >> S >> E; 
 
    generate(X, Y, 200, S, E); 
 
    // second generate Y from X 
 
    cin >> S >> E; 
 
    generate(X, Y, 200, S, E); 
 
    // add 10 to X 
 
    addVal(X, 200, 10); 
 
    // third generate Y from X 
 
    cin >> S >> E; 
 
    generate(X, Y, 200, S, E); 
 
    // read first half of X 
 
    readFirstHalf(X, 200); 
 
    // generate Q from X 
 
    cin >> S >> E; 
 
    generate(X, Q, 200, S, E); 
 
    // add 20 to X 
 
    addVal(X, 200, 20); 
 
    // generate Q from X 
 
    cin >> S >> E; 
 
    generate(X, Q, 200, S, E); 
 
    // read second half of X 
 
    readSecondHalf(X, 200); 
 
    // generate X from X 
 
    cin >> S >> E; 
 
    generate(X, X, 200, S, E); 
 
    // read first half of Q 
 
    readFirstHalf(Q, 200); 
 
    // generate Y from Q 
 
    cin >> S >> E; 
 
    generate(Q, Y, 200, S, E); 
 
    // read second half of Q 
 
    readSecondHalf(Q, 200); 
 
    // generate Y from Q 
 
    cin >> S >> E; 
 
    generate(Q, Y, 200, S, E); 
 
    // add 30 to Q 
 
    addVal(Q, 200, 30); 
 
    return 0; 
}