/*

Problem 119

Description:
Generates arrays using
even values before the maximum
and odd values after it,
then modifies negative values
using calculated averages.

*/

#include<iostream> 
using namespace std; 
 
// read 
 
void read(int arr[], int size) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        cin >> arr[i]; 
    } 
} 
 
// Copy Evens and Odds 
 
void generate(int X[], int Y[], int size) 
{ 
    // find max 
 
    int mx = -99999; 
    int posMax; 
 
    for(int i = 0; i < size; i++) 
    { 
        if(X[i] > mx) 
        { 
            mx = X[i]; 
            posMax = i; 
        } 
    } 
 
    int pos = 0; 
 
    // even before max 
 
    for(int i = 0; i < posMax; i++) 
    { 
        if(X[i] % 2 == 0) 
        { 
            Y[pos] = X[i]; 
            pos++; 
        } 
    } 
 
    // odd after max 
 
    for(int i = posMax + 1; i < size; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            Y[pos] = X[i]; 
            pos++; 
        } 
    } 
 
    // fill by -1 
 
    while(pos < size) 
    { 
        Y[pos] = -1; 
        pos++; 
    } 
} 
 
// average of 2nd half 
 
double avg2(int arr[], int size) 
{ 
    double sum = 0; 
 
    int ct = 0; 
 
    for(int i = size / 2; i < size; i++) 
    { 
        sum += arr[i]; 
        ct++; 
    } 
 
    return sum / ct; 
} 
 
// average of 1st half 
 
double avg1(int arr[], int size) 
{ 
    double sum = 0; 
 
    int ct = 0; 
 
    for(int i = 0; i < size / 2; i++) 
    { 
        sum += arr[i]; 
        ct++; 
    } 
 
    return sum / ct; 
} 
 
// add to negative values 
 
void addNeg(int arr[], int size, double val) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        if(arr[i] < 0) 
        { 
            arr[i] += val; 
        } 
    } 
} 
 
int main() 
{ 
    int X[600]; 
    int Y[600]; 
    int Z[600]; 
    int Q[600]; 
    int W[600]; 
 
    double a1,a2,a3,a4,a5,a6,a7,a8,a9; 
 
    // X -> Y 
 
    read(X,600); 
 
    generate(X,Y,600); 
 
    a2 = avg2(Y,600); 
 
    a1 = avg1(X,600); 
 
    addNeg(Y,600,a1); 
 
    // Q -> Z 
 
    read(Q,600); 
 
    generate(Q,Z,600); 
 
    a3 = avg2(Q,600); 
 
    addNeg(Z,600,a3); 
 
    // W -> Z 
 
    read(W,600); 
 
    generate(W,Z,600); 
 
    a4 = avg2(W,600); 
 
    addNeg(Z,600,a4); 
 
    // averages 
 
    a5 = avg2(Y,600); 
 
    a6 = avg1(Z,600); 
 
    a7 = avg2(Q,600); 
 
    a8 = avg1(W,600); 
 
    // Q -> W 
 
    read(Q,600); 
 
    generate(Q,W,600); 
 
    // Y -> X 
 
    read(Y,600); 
 
    generate(Y,X,600); 
 
    // X -> Y 
 
    read(X,600); 
 
    generate(X,Y,600); 
 
    a9 = avg2(Y,600); 
 
    addNeg(Y,600,a9); 
 
    // W -> Q 
 
    read(W,600); 
 
    generate(W,Q,600); 
 
    return 0; 
}