/* 
Problem 088

Description:
Stores indexes of negative values from the second half
then from the first half of the array,
and fills remaining cells with 0.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[10]; 
    int Y[10]; 
 
    // read X 
    for(int i = 0; i < 10; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int j = 0; 
 
    // negative values in second half 
    for(int i = 5; i < 10; i++) 
    { 
        if(X[i] < 0) 
        { 
            Y[j] = i; 
            j++; 
        } 
    } 
 
    // negative values in first half 
    for(int i = 0; i < 5; i++) 
    { 
        if(X[i] < 0) 
        { 
            Y[j] = i; 
            j++; 
        } 
    } 
 
    // fill remaining cells with 0 
    while(j < 10) 
    { 
        Y[j] = 0; 
        j++; 
    } 
 
    // print Y 
    for(int i = 0; i < 10; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}