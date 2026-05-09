/* 
Problem 069

Description:
Prints the last word, then the original sentence,
then the first word.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
 
    gets(X); 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int firstStart = 0; 
    int firstEnd = 0; 
 
    while(X[firstEnd] != ' ') 
    { 
        firstEnd++; 
    } 
 
    int firstLen = firstEnd - firstStart; 
 
    int lastStart = len - 1; 
 
    while(X[lastStart] != ' ') 
    { 
        lastStart--; 
    } 
 
    lastStart++; 
 
    int lastLen = len - lastStart; 
 
    for(int i = lastStart; i < len; i++) 
    { 
        cout << X[i]; 
    } 
 
    cout << " "; 
 
    for(int i = 0; i < len; i++) 
    { 
        cout << X[i]; 
    } 
 
    cout << " "; 
 
    for(int i = firstStart; i < firstEnd; i++) 
    { 
        cout << X[i]; 
    } 
 
    return 0; 
}