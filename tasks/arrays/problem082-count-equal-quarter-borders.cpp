/* 
Problem 082

Description:
Divides the array into 4 quarters and counts
how many adjacent quarter borders contain equal values.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int n) 
{ 
    int q = n / 4; 
    int ct = 0; 
 
    for(int i = 1; i <= 3; i++) 
    { 
        if(X[i*q - 1] == X[i*q]) 
        { 
            ct++; 
        } 
    } 
 
    cout << ct << endl; 
} 
 
int main() 
{ 
    int X[100], n; 
 
    cin >> n; 
 
    for(int i = 0; i < n; i++) 
        cin >> X[i]; 
 
    solve(X, n); 
 
    return 0; 
}