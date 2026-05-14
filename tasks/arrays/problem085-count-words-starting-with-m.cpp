/* 
Problem 085

Description:
Counts the number of words
that start with the letter 'm'.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
 
    gets(X); 
 
    int count = 0; 
 
    // first word 
    if(X[0] == 'm') 
    { 
        count++; 
    } 
 
    // باقي الكلمات 
    for(int i = 0; X[i] != '\0'; i++) 
    { 
        if(X[i] == ' ' && X[i + 1] == 'm') 
        { 
            count++; 
        } 
    } 
 
    cout << count << " words"; 
 
    return 0; 
}