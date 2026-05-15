/* 
Problem 086

Description:
Creates a new array containing the maximum value
between corresponding elements of two arrays.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[10]; 
    int Y[10]; 
    int Z[10]; 
 
    // read X 
    for(int i = 0; i < 10; i++) 
    { 
        cin >> X[i]; 
    } 
 
    // read Y 
    for(int i = 0; i < 10; i++) 
    { 
        cin >> Y[i]; 
    } 
 
    // create Z 
    for(int i = 0; i < 10; i++) 
    { 
        if(X[i] > Y[i]) 
        { 
            Z[i] = X[i]; 
        } 
        else 
        { 
            Z[i] = Y[i]; 
        } 
    } 
 
    // print Z 
    for(int i = 0; i < 10; i++) 
    { 
        cout << Z[i] << " "; 
    } 
 
    return 0; 
}