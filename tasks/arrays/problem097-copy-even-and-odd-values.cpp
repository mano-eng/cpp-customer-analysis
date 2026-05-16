/* 
Problem 097

Description:
Copies even values from the second half of the array,
then copies odd values from the first half,
and fills remaining cells with -1.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
    int Y[30]; 
 
    // read X 
    for(int i = 0; i < 30; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int j = 0; 
 
    // second half -> even values 
    for(int i = 15; i < 30; i++) 
    { 
        if(X[i] % 2 == 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    // first half -> odd values 
    for(int i = 0; i < 15; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    // fill remaining with -1 
    while(j < 30) 
    { 
        Y[j] = -1; 
        j++; 
    } 
 
    // print Y 
    for(int i = 0; i < 30; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}