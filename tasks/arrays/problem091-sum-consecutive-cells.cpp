/* 
Problem 091

Description:
Calculates the sum of every two consecutive cells
and stores the results in another array.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[20]; 
    int Y[20]; 
 
    // read X 
    for(int i = 0; i < 20; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int j = 0; 
 
    // sum consecutive cells 
    for(int i = 0; i < 19; i++) 
    { 
        Y[j] = X[i] + X[i + 1]; 
 
        j++; 
    } 
 
    // fill remaining cells with 0 
    while(j < 20) 
    { 
        Y[j] = 0; 
 
        j++; 
    } 
 
    // print Y 
    for(int i = 0; i < 20; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}