/*

Problem 128

Description:
Divides the array into
regions of 3 cells
then finds the largest
and smallest region totals.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    int mx = -999999999; 
 
    int mn = 999999999; 
 
    for(int i = 0; i < N; i += 3) 
    { 
        int sum = 0; 
 
        for(int j = i; j < i + 3; j++) 
        { 
            sum += X[j]; 
        } 
 
        if(sum > mx) 
        { 
            mx = sum; 
        } 
 
        if(sum < mn) 
        { 
            mn = sum; 
        } 
    } 
 
    cout << "The largest total is : "; 
 
    cout << mx << endl; 
 
    cout << "The lowest total is : "; 
 
    cout << mn; 
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