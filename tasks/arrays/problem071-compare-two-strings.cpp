/* 
Problem 071

Description:
Compares two strings lexicographically
and determines their relationship.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[200], Y[200]; 
 
    gets(X); 
    gets(Y); 
 
    int lenX = 0, lenY = 0; 

    while(X[lenX] != '\0') 
        lenX++; 

    while(Y[lenY] != '\0') 
        lenY++; 
 
    int i = 0; 

    while(i < lenX && i < lenY) 
    { 
        if(X[i] < Y[i]) 
        { 
            cout << "first < second" << endl; 
            return 0; 
        } 
        else if(X[i] > Y[i]) 
        { 
            cout << "first > second" << endl; 
            return 0; 
        } 

        i++; 
    } 
 
    if(lenX == lenY) 
        cout << "identical" << endl; 
    else if(lenX < lenY) 
        cout << "first < second" << endl; 
    else 
        cout << "first > second" << endl; 
 
    return 0; 
}