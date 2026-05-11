/* 
Problem 072

Description:
Copies all negative numbers from the array into another array,
then fills the remaining positions with the average value.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
    int Y[30]; 
 
    int sum = 0; 
 
    for(int i = 0; i < 30; i++) 
    { 
        cin >> X[i]; 
        sum += X[i]; 
    } 
 
    int avg = sum / 30; 
 
    int j = 0; 
 
    for(int i = 0; i < 30; i++) 
    { 
        if(X[i] < 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    while(j < 30) 
    { 
        Y[j] = avg; 
        j++; 
    } 
 
    for(int i = 0; i < 30; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}