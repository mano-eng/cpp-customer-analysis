/* 
Problem 095

Description:
Finds the first and second negative values in the array,
adds 5 to odd values before the first negative,
and adds 7 to odd values after the second negative.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[15]; 
 
    // read array 
    for(int i = 0; i < 15; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int firstNeg; 
    int secondNeg; 

    int count = 0; 
 
    // find first and second negative 
    for(int i = 0; i < 15; i++) 
    { 
        if(X[i] < 0) 
        { 
            count++; 
 
            if(count == 1) 
            { 
                firstNeg = i; 
            } 
 
            if(count == 2) 
            { 
                secondNeg = i; 
            } 
        } 
    } 
 
    // add 5 before first negative 
    for(int i = 0; i < firstNeg; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            X[i] += 5; 
        } 
    } 
 
    // add 7 after second negative 
    for(int i = secondNeg + 1; i < 15; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            X[i] += 7; 
        } 
    } 
 
    // print array 
    for(int i = 0; i < 15; i++) 
    { 
        cout << X[i] << " "; 
    } 
 