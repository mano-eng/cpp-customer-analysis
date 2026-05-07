/* 
Problem 060

Description:
Processes arrays by comparing half sums, copying even values 
from the larger half, and applying multiple transformations 
such as swapping halves and updating values.
*/

#include <iostream> 
using namespace std; 
 
void generateAndCopy(int X[], int Y[], int n) 
{ 
    int mid = n / 2; 
 
    int totrht = 0; 
    for(int i = mid; i < n; i++) 
    { 
        if(X[i] == -1) break; 
        totrht += X[i]; 
    } 
 
    int totlft = 0; 
    for(int i = mid - 1; i >= 0; i--) 
    { 
        if(X[i] == -1) break; 
        totlft += X[i]; 
    } 
 
    for(int i = 0; i < n; i++) 
        Y[i] = -1; 
 
    int j = 0; 
 
    if(totlft > totrht) 
    { 
        for(int i = 0; i < mid; i++) 
        { 
            if(X[i] % 2 == 0 && X[i] != -1) 
            { 
                Y[j] = X[i]; 
                j++; 
            } 
        } 
    } 
    else 
    { 
        for(int i = mid; i < n; i++) 
        { 
            if(X[i] % 2 == 0 && X[i] != -1) 
            { 
                Y[j] = X[i]; 
                j++; 
            } 
        } 
    } 
} 
 
int countNeg1FirstHalf(int A[], int n) 
{ 
    int ct = 0; 
    for(int i = 0; i < n / 2; i++) 
        if(A[i] == -1) ct++; 
    return ct; 
} 
 
void swapHalves(int A[], int n) 
{ 
    int mid = n / 2; 
    for(int i = 0; i < mid; i++) 
    { 
        int temp  = A[i]; 
        A[i]      = A[i + mid]; 
        A[i + mid] = temp; 
    } 
} 
 
void addSecondHalfExcNeg1(int A[], int n, int val) 
{ 
    int mid = n / 2; 
    for(int i = mid; i < n; i++) 
    { 
        if(A[i] != -1) 
            A[i] += val; 
    } 
} 
 
void addToAll(int A[], int n, int val) 
{ 
    for(int i = 0; i < n; i++) 
        A[i] += val; 
} 
 
int main() 
{ 
    int X[200], Y[200]; 
    int Q[600], Z[600], W[600]; 
    int a1, a2; 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
 
    generateAndCopy(X, Y, 200); 
 
    a1 = countNeg1FirstHalf(Y, 200); 
 
    addSecondHalfExcNeg1(X, 200, a1); 
 
    addToAll(Y, 200, a1); 
 
    a2 = countNeg1FirstHalf(Y, 200); 
 
    swapHalves(X, 200); 
 
    addSecondHalfExcNeg1(X, 200, a2); 
 
    generateAndCopy(X, Y, 200); 
 
    for(int i = 0; i < 600; i++) cin >> Q[i]; 
 
    generateAndCopy(Q, Z, 600); 
 
    swapHalves(Q, 600); 
 
    a1 = countNeg1FirstHalf(Z, 600); 
 
    generateAndCopy(Q, W, 600); 
 
    for(int i = 0; i < 600; i++) cin >> Q[i]; 
 
    generateAndCopy(Q, W, 600); 
 
    a1 = countNeg1FirstHalf(W, 600); 
 
    swapHalves(Q, 600); 
 
    addSecondHalfExcNeg1(Q, 600, a1); 
 
    addToAll(W, 600, a1); 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
 
    generateAndCopy(X, Y, 200); 
 
    for(int i = 0; i < 600; i++) cin >> Q[i]; 
 
    generateAndCopy(Q, Z, 600); 
 
    return 0; 
}