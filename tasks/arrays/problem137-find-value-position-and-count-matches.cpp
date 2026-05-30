/*

Problem 137

Description:
Finds the position
of a specified value
in the first array,
then counts matching values
between both arrays
to its left.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int Y[], int N, int Val) 
{ 
    // find position 
 
    int pos; 
 
    for(int i = 0; i < N; i++) 
    { 
        if(X[i] == Val) 
        { 
            pos = i; 
 
            break; 
        } 
    } 
 
    // count matched values 
 
    int ct = 0; 
 
    for(int i = 0; i < pos; i++) 
    { 
        if(X[i] == Y[i]) 
        { 
            ct++; 
        } 
    } 
 
    cout << "The position of the 2 cells starting at : "; 
 
    cout << pos << endl; 
 
    cout << "The number of the matched values in the left part : "; 
 
    cout << ct; 
} 
 
int main() 
{ 
    int X[200]; 
    int Y[200]; 
 
    int N; 
    int Val; 
 
    cin >> N; 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> X[i]; 
    } 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> Y[i]; 
    } 
 
    cin >> Val; 
 
    solve(X, Y, N, Val); 
 
    return 0; 
}