/* 
Problem 063

Description:
Manipulates parts of the first, last, and before-last words 
by inserting split halves into specific positions.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[200]; 
    gets(X); 

    int len = 0; 
    while(X[len] != '\0') 
        len++; 

    int firstStart = 0; 
    int firstEnd = 0; 

    while(X[firstEnd] != ' ') 
        firstEnd++; 

    int firstLen = firstEnd - firstStart; 

    int lastStart = len - 1; 

    while(X[lastStart] != ' ') 
        lastStart--; 

    lastStart++; 

    int lastLen = len - lastStart; 

    int beforeLastEnd = lastStart - 2; 

    while(X[beforeLastEnd] != ' ') 
        beforeLastEnd--; 

    beforeLastEnd++; 

    int beforeLastLen = (lastStart - 1) - beforeLastEnd; 

    int mid = beforeLastLen / 2; 

    char leftHalf[100], rightHalf[100]; 
    int k = 0; 

    for(int i = beforeLastEnd; i < beforeLastEnd + mid; i++) 
    { 
        leftHalf[k] = X[i]; 
        k++; 
    } 
    leftHalf[k] = '\0'; 

    k = 0; 
    for(int i = beforeLastEnd + mid; i < beforeLastEnd + beforeLastLen; i++) 
    { 
        rightHalf[k] = X[i]; 
        k++; 
    } 
    rightHalf[k] = '\0'; 

    for(int i = 0; i < firstLen / 2; i++) 
        cout << X[i]; 

    cout << leftHalf; 

    for(int i = firstLen / 2; i < firstLen; i++) 
        cout << X[i]; 

    cout << " "; 

    for(int i = firstEnd + 1; i < beforeLastEnd - 1; i++) 
        cout << X[i]; 

    cout << " "; 

    for(int i = lastStart; i < lastStart + lastLen / 2; i++) 
        cout << X[i]; 

    cout << rightHalf; 

    for(int i = lastStart + lastLen / 2; i < len; i++) 
        cout << X[i]; 

    return 0; 
}