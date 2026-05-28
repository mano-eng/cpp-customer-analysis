/*

Problem 127

Description:
Counts regions of 3 cells
containing only even values
and calculates
the average of the array.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    int regions = 0; 
 
    int total = 0; 
 
    // total of array 
 
    for(int i = 0; i < N; i++) 
    { 
        total += X[i]; 
    } 
 
    // regions of 3 cells 
 
    for(int i = 0; i < N; i += 3) 
    { 
        if(X[i] % 2 == 0 && 
           X[i + 1] % 2 == 0 && 
           X[i + 2] % 2 == 0) 
        { 
            regions++; 
        } 
    } 
 
    double avg = (double)total / N; 
 
    cout << "How many regions = "; 
 
    cout << regions << endl; 
 
    cout << "The Average = "; 
 
    cout << avg; 
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