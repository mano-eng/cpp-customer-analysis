/* 
Problem 079

Description:
Counts the number of words with even length.
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

    int ct = 0; 
    int start = 0; 
    int end = 0; 

    while(end <= len) 
    { 
        if(X[end] == ' ' || X[end] == '\0') 
        { 
            int wordLen = end - start; 

            if(wordLen % 2 == 0) 
                ct++; 

            start = end + 1; 
        } 

        end++; 
    } 

    cout << ct << " words"; 

    return 0; 
}