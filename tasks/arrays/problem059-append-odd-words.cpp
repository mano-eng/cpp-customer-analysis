/* 
Problem 059

Description:
Appends all words with odd length from the string 
to the end of the same string.
*/

#include <iostream> 
using namespace std; 
 
void addOddWords(char X[]) 
{ 
    int len = 0; 
 
    while(X[len] != '\0') 
        len++; 
 
    int end = len; 
 
    for(int i = 0; i < len; ) 
    { 
        int start = i; 
        int count = 0; 
 
        while(X[i] != ' ' && X[i] != '\0') 
        { 
            count++; 
            i++; 
        } 
 
        if(count % 2 != 0) 
        { 
            X[end] = ' '; 
            end++; 
 
            for(int j = start; j < start + count; j++) 
            { 
                X[end] = X[j]; 
                end++; 
            } 
        } 
 
        if(X[i] == ' ') 
            i++; 
    } 
 
    X[end] = '\0'; 
} 
 
int main() 
{ 
    char X[300]; 
    gets(X); 
 
    addOddWords(X); 
 
    cout << X; 
 
    return 0; 
}