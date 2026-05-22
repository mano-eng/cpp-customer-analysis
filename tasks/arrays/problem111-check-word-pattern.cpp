/* 
Problem 111

Description:
Finds the Nth word in the string,
then checks:
- beginning letters of words before it
  against letters of the Nth word.
- beginning letters of words after it
  against reversed letters of the Nth word.

Prints "OK" if valid, otherwise "NO".
*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], int N, char Y[]) 
{ 
    int len = 0; 

    while(X[len] != '\0') 
        len++; 
 
    // find nth word
    int word = 0; 
    int start, end; 
 
    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            word++; 

            if(word == N) 
            { 
                start = i; 
                end = i; 

                while(X[end] != ' ' && X[end] != '\0') 
                    end++; 

                break; 
            } 
        } 
    } 
 
    int ok = 1; 
 
    // check words before N
    int p = start; 

    for(int i = 0; i < start; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            if(X[i] != X[p]) 
            { 
                ok = 0; 
                break; 
            } 

            p++; 
        } 
    } 
 
    // check words after N (reverse)
    p = end - 1; 

    for(int i = end + 1; i < len; i++) 
    { 
        if(i == end + 1 || X[i - 1] == ' ') 
        { 
            if(X[i] != X[p]) 
            { 
                ok = 0; 
                break; 
            } 

            p--; 
        } 
    } 
 
    if(ok == 1) 
    { 
        Y[0] = 'O'; 
        Y[1] = 'K'; 
        Y[2] = '\0'; 
    } 
    else 
    { 
        Y[0] = 'N'; 
        Y[1] = 'O'; 
        Y[2] = '\0'; 
    } 
} 
 
int main() 
{ 
    char X[200]; 
    char Y[10]; 
    int N; 
 
    gets_s(X); 

    cin >> N; 
 
    solve(X, N, Y); 
 
    cout << Y; 
 
    return 0; 
}