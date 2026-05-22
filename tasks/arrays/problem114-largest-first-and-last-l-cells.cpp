/*

Problem 114

Description:
Finds the largest element
among the first L cells
and the last L cells in the array.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N, int L) 
{ 
    // ================= first L ================= 
 
    int max1 = X[0]; 
 
    for(int i = 0; i < L; i++) 
    { 
        if(X[i] > max1) 
        { 
            max1 = X[i]; 
        } 
    } 
 
    // ================= last L ================= 
 
    int max2 = X[N - L]; 
 
    for(int i = N - L; i < N; i++) 
    { 
        if(X[i] > max2) 
        { 
            max2 = X[i]; 
        } 
    } 
 
    // ================= output ================= 
 
    cout << "Largest of first " << L << " cells = " 
         << max1 << endl; 
 
    cout << "Largest of last " << L << " cells = " 
         << max2; 
} 
 
int main() 
{ 
    int X[100]; 
 
    int N, L; 
 
    cin >> N >> L; 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> X[i]; 
    } 
 
    solve(X, N, L); 
 
    return 0; 
}