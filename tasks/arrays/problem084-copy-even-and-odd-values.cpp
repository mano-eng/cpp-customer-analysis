/* 
Problem 084

Description:
Copies even values from the second half of the array,
then copies odd values from the first half,
and fills remaining cells with -1.
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
 
    // copy even values from second half 
    for(int i = 5; i < 10; i++) 
    { 
        if(X[i] % 2 == 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    // copy odd values from first half 
    for(int i = 0; i < 5; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    // fill remaining cells with -1 
    while(j < 10) 
    { 
        Y[j] = -1; 
        j++; 
    } 
 
    // print Y 
    for(int i = 0; i < 10; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}