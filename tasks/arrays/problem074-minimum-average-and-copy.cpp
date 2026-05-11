/* 
Problem 074

Description:
Finds the minimum value and its position,
calculates the average up to that position,
then copies values greater than 5 into another array.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[10]; 
    int Y[10]; 
 
    for(int i = 0; i < 10; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int min = X[0]; 
    int minIndex = 0; 
 
    for(int i = 1; i < 10; i++) 
    { 
        if(X[i] < min) 
        { 
            min = X[i]; 
            minIndex = i; 
        } 
    } 
 
    int sum = 0; 
    int ct = 0; 
 
    for(int i = 1; i <= minIndex; i++) 
    { 
        sum += X[i]; 
        ct++; 
    } 
 
    float avg = (float)sum / ct; 
 
    int j = 0; 
 
    for(int i = 1; i <= minIndex; i++) 
    { 
        if(X[i] > 5) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    while(j < 10) 
    { 
        Y[j] = 0; 
        j++; 
    } 
 
    for(int i = 0; i < 10; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    cout << endl; 
    cout << "Avg = " << avg; 
 
    return 0; 
}