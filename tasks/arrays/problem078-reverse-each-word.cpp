/* 
Problem 078

Description:
Reverses every word in the string individually.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets(X); 

    int len = 0; 

    while(X[len] != '\0') 
        len++; 

    int start = 0; 
    int end = 0; 

    while(end <= len) 
    { 
        if(X[end] == ' ' || X[end] == '\0') 
        { 
            for(int i = end - 1; i >= start; i--) 
                cout << X[i]; 

            if(X[end] == ' ') 
                cout << ' '; 

            start = end + 1; 
        } 

        end++; 
    } 

    return 0; 
}