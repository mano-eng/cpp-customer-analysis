/*

Problem 125

Description:
Calculates the total of
adjacent equal elements
and the total of
remaining different elements.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    int totalEqual = 0; 
    int totalRem = 0; 
 
    for(int i = 0; i < N - 1; i++) 
    { 
        if(X[i] == X[i + 1]) 
        { 
            totalEqual += X[i] + X[i + 1]; 
 
            i++; 
        } 
 
        else 
        { 
            totalRem += X[i]; 
        } 
    } 
 
    // last cell 
 
    if(X[N - 1] != X[N - 2]) 
    { 
        totalRem += X[N - 1]; 
    } 
 
    // output 
 
    cout << "Total equal = " << totalEqual << endl; 
 
    cout << "Total reminder = " << totalRem; 
} 
 
int main() 
{ 
    int X[200]; 
 
    int N; 
 
    cin >> N; 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> X[i]; 
    } 
 
    solve(X,N); 
 
    return 0; 
}