/*

Problem 116

Description:
Generates new array patterns
based on values inside a range,
then modifies arrays using
odd-number statistics.

*/

#include <iostream> 
using namespace std; 
 
void read(int arr[], int size) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        cin >> arr[i]; 
    } 
} 
 
void generate(int X[], int Y[], int N, int S, int E) 
{ 
    int mx = -99999; 
    for(int i = S; i <= E; i++) 
    { 
        if(X[i] > mx) 
        { 
            mx = X[i]; 
        } 
    } 
 
    for(int i = 0; i < N; i++) 
    { 
        Y[i] = mx; 
    } 
 
    int start = 0; 
    int end = N - 1; 
 
    for(int i = S; i <= E; i++) 
    { 
        int val = X[i]; 
        int ct = 0; 
 
        for(int j = 0; j < N; j++) 
        { 
            if(j < S || j > E) 
            { 
                if(X[j] == val) 
                { 
                    ct++; 
                } 
            } 
        } 
 
        if(ct == 2) 
        { 
            Y[start] = val; 
            start++; 
        } 
 
        if(ct == 1) 
        { 
            Y[end] = val; 
            end--; 
        } 
    } 
} 
 
int odd2(int arr[], int size) 
{ 
    int ct = 0; 
    for(int i = size / 2; i < size; i++) 
    { 
        if(arr[i] % 2 != 0) 
        { 
            ct++; 
        } 
    } 
    return ct; 
} 
 
int odd1(int arr[], int size) 
{ 
    int ct = 0; 
    for(int i = 0; i < size / 2; i++) 
    { 
        if(arr[i] % 2 != 0) 
        { 
            ct++; 
        } 
    } 
    return ct; 
} 
 
void add(int arr[], int size, int val) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        arr[i] += val; 
    } 
} 
 
void sub(int arr[], int size, int val) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        arr[i] -= val; 
    } 
} 
 
int main() 
{ 
    int X[600]; 
    int Y[600]; 
    int Z[600]; 
    int Q[600]; 
    int W[600]; 
    int A, B; 
    int S, E; 
 
    cin >> S >> E; 
 
    read(X, 600); 
    generate(X, Y, 600, S, E); 
    A = odd2(Y, 600); 
    B = odd1(X, 600); 
    add(Y, 600, A); 
    sub(X, 600, B); 
 
    read(Q, 600); 
    generate(Q, Z, 600, S, E); 
 
    read(X, 600); 
    generate(X, Y, 600, S, E); 
 
    read(Y, 600); 
    generate(Y, X, 600, S, E); 
    A = odd2(Y, 600); 
    B = odd1(X, 600); 
    add(Y, 600, A); 
    sub(X, 600, B); 
 
    read(W, 600); 
    generate(W, Z, 600, S, E); 
    A = odd2(Z, 600); 
    B = odd1(W, 600); 
    add(Z, 600, A); 
    sub(W, 600, B); 
 
    read(X, 600); 
    generate(X, Y, 600, S, E); 
    A = odd2(Z, 600); 
    B = odd1(W, 600); 
    add(Z, 600, A); 
 
    return 0; 
}