/* 
Problem 065

Description:
Copies halves of arrays based on a special position condition,
calculates averages, and applies transformations on negative values.
*/

#include <iostream> 
using namespace std; 
 
void copyHalves(int X[], int Y[], int n) 
{ 
    int pos; 
 
    for(int i = 0; i < n; i++) 
    { 
        if(X[i] == i) 
        { 
            pos = i; 
            break; 
        } 
    } 
 
    int j = 0; 
 
    for(int i = 0; i < n; i++) 
    { 
        Y[i] = -1; 
    } 
 
    for(int i = 0; i < pos / 2; i++) 
    { 
        Y[j] = X[i]; 
        j++; 
    } 
 
    int half = ((n - 1) - (pos + 1)) / 2; 
 
    for(int i = pos + 1; i < pos + 1 + half; i++) 
    { 
        Y[j] = X[i]; 
        j++; 
    } 
} 
 
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
 
float avgSecondHalf(int A[], int n) 
{ 
    int sum = 0; 
    int ct = 0; 
 
    for(int i = n / 2; i < n; i++) 
    { 
        sum += A[i]; 
        ct++; 
    } 
 
    if(ct == 0) 
        return 0; 
 
    return (float)sum / ct; 
} 
 
void addToNegative(int A[], int n, float val) 
{ 
    for(int i = 0; i < n; i++) 
    { 
        if(A[i] < 0) 
            A[i] += val; 
    } 
} 
 
int main() 
{ 
    int X[200], Y[200]; 
    int Q[600], Z[600], W[600]; 
 
    float a1, a2, a3, a4, a5, a6, a7, a8, a9; 
 
    for(int i = 0; i < 200; i++) 
        cin >> X[i]; 
 
    copyHalves(X, Y, 200); 
 
    a2 = avgPositive(Y, 200); 
 
    a1 = avgPositive(X, 200); 
 
    addToNegative(Y, 200, a1); 
 
    for(int i = 0; i < 600; i++) 
        cin >> Q[i]; 
 
    copyHalves(Q, Z, 600); 
 
    a3 = avgPositive(Q, 600); 
 
    addToNegative(Z, 600, a3); 
 
    for(int i = 0; i < 600; i++) 
        cin >> W[i]; 
 
    copyHalves(W, Z, 600); 
 
    a4 = avgSecondHalf(W, 600); 
 
    addToNegative(Z, 600, a4); 
 
    a5 = avgPositive(Y, 200); 
 
    a6 = avgPositive(Z, 600); 
 
    a7 = avgPositive(Q, 600); 
 
    a8 = avgPositive(W, 600); 
 
    for(int i = 0; i < 600; i++) 
        cin >> Q[i]; 
 
    copyHalves(Q, W, 600); 
 
    for(int i = 0; i < 200; i++) 
        cin >> Y[i]; 
 
    copyHalves(Y, X, 200); 
 
    for(int i = 0; i < 200; i++) 
        cin >> X[i]; 
 
    copyHalves(X, Y, 200); 
 
    a9 = avgPositive(Y, 200); 
 
    addToNegative(Y, 200, a9); 
 
    for(int i = 0; i < 600; i++) 
        cin >> W[i]; 
 
    copyHalves(W, Q, 600); 
 
    return 0; 
}