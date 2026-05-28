/*

Problem 123

Description:
Divides the array into
four equal parts
and prints the minimum value
from each part.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    int part = N / 4; 
 
    for(int i = 0; i < N; i += part) 
    { 
        int mn = X[i]; 
 
        for(int j = i; j < i + part; j++) 
        { 
            if(X[j] < mn) 
            { 
                mn = X[j]; 
            } 
        } 
 
        cout << mn << " "; 
    } 
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