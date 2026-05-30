/*

Problem 138

Description:
Finds the first pair
of consecutive cells
whose sum equals a given value,
then finds the largest value
before that position.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N, int Val) 
{ 
    // find position 
 
    int pos; 
 
    for(int i = 0; i < N - 1; i++) 
    { 
        if(X[i] + X[i + 1] == Val) 
        { 
            pos = i; 
 
            break; 
        } 
    } 
 
    // largest before position 
 
    int mx = -999999999; 
 
    for(int i = 0; i < pos; i++) 
    { 
        if(X[i] > mx) 
        { 
            mx = X[i]; 
        } 
    } 
 
    cout << "The position of the 2 cells starting at : "; 
 
    cout << pos << endl; 
 
    cout << "The Largest value before the position is : "; 
 
    cout << mx; 
} 
 
int main() 
{ 
    int X[200]; 
 
    int N; 
 
    int Val; 
 
    cin >> N; 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> X[i]; 
    } 
 
    cin >> Val; 
 
    solve(X, N, Val); 
 
    return 0; 
}