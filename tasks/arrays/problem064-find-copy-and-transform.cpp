/* 
Problem 064

Description:
Finds special positions in arrays, copies odd values into new arrays,
calculates averages, and applies multiple transformations on datasets.
*/

#include <iostream> 
using namespace std; 
 
void findAndCopy(int X[], int Y[], int n) 
{ 
    int pos1, pos2; 
    int ct = 0; 
 
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
 
    for(int i = 0; i < n; i++) 
        Y[i] = -1; 
 
    int j = 0; 
 
    for(int i = 0; i < pos1; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    Y[pos1] = X[pos1]; 
    Y[pos2] = X[pos2]; 
 
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
 
float avgBetweenFound(int X[], int n) 
{ 
    int pos1, pos2; 
    int ct1 = 0; 
 
    for(int i = 0; i < n; i++) 
    { 
        if(X[i] == i * 2) 
        { 
            if(ct1 == 0) 
            { 
                pos1 = i; 
                ct1++; 
            } 
            else 
            { 
                pos2 = i; 
                break; 
            } 
        } 
    } 
 
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
 
void addToAll(int A[], int n, float val) 
{ 
    for(int i = 0; i < n; i++) 
        A[i] += val; 
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
 
    float a1, a2; 
 
    for(int i = 0; i < 200; i++) 
        cin >> X[i]; 
 
    findAndCopy(X, Y, 200); 
 
    a1 = avgBetweenFound(X, 200); 
 
    a2 = avgPositive(Y, 200); 
 
    addToAll(Y, 200, a1); 
 
    addToAll(Y, 200, a2); 
 
    for(int i = 0; i < 600; i++) 
        cin >> Q[i]; 
 
    findAndCopy(Q, Z, 600); 
 
    addToAll(Z, 600, a1); 
 
    a1 = avgBetweenFound(Q, 600); 
 
    a2 = avgPositive(Z, 600); 
 
    addToAll(Z, 600, a1); 
 
    addToAll(Z, 600, a2); 
 
    for(int i = 0; i < 600; i++) 
        cin >> W[i]; 
 
    findAndCopy(W, Q, 600); 
 
    a1 = avgBetweenFound(W, 600); 
 
    a2 = avgPositive(Q, 600); 
 
    addToNegative(Q, 600, a1); 
 
    addToNegative(Q, 600, a2); 
 
    for(int i = 0; i < 200; i++) 
        cin >> Y[i]; 
 
    findAndCopy(Y, X, 200); 
 
    for(int i = 0; i < 600; i++) 
        cin >> Q[i]; 
 
    findAndCopy(Q, W, 600); 
 
    for(int i = 0; i < 200; i++) 
        cin >> X[i]; 
 
    findAndCopy(X, Y, 200); 
 
    a1 = avgBetweenFound(X, 200); 
 
    a2 = avgPositive(Y, 200); 
 
    addToAll(Y, 200, a1); 
 
    addToAll(Y, 200, a2); 
 
    return 0; 
}