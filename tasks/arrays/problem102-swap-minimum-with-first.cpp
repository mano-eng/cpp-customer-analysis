/* 
Problem 102

Description:
Finds the minimum value in the array,
swaps it with the first element,
then prints the updated array.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
 
    // read array 
    for(int i = 0; i < 30; i++) 
    { 
        cin >> X[i]; 
    } 
 
    // assume first element is minimum 
    int min = X[0]; 
    int minIndex = 0; 
 
    // find minimum value and its index 
    for(int i = 1; i < 30; i++) 
    { 
        if(X[i] < min) 
        { 
            min = X[i]; 
            minIndex = i; 
        } 
    } 
 
    // swap with first cell 
    int temp = X[0]; 

    X[0] = X[minIndex]; 

    X[minIndex] = temp; 
 
    // print array 
    for(int i = 0; i < 30; i++) 
    { 
        cout << X[i] << " "; 
    } 
 
    return 0; 
}