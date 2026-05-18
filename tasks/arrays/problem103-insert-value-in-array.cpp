/* 
Problem 103

Description:
Inserts a new value into the array
at a specified position by shifting
elements to the right.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    int X[31]; 
    int val, pos; 
 
    // read X 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    cin >> val; 
    cin >> pos; 
 
    // shift elements to the right
    for(int i = 29; i >= pos; i--) 
        X[i + 1] = X[i]; 
 
    // insert value
    X[pos] = val; 
 
    // print array
    for(int i = 0; i < 31; i++) 
        cout << X[i] << " "; 
 
    return 0; 
}