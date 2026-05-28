/*

Problem 124

Description:
Finds the difference
between the first two cells
and counts how many times
this difference appears
between consecutive elements.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    // difference between first 2 cells 
 
    int diff = X[1] - X[0]; 
 
    // count appearance 
 
    int ct = 0; 
 
    for(int i = 0; i < N - 1; i++) 
    { 
        if(X[i + 1] - X[i] == diff) 
        { 
            ct++; 
        } 
    } 
 
    // output 
 
    cout << "Diff = " << diff << endl; 
 
    cout << "Diff appeared = " << ct; 
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