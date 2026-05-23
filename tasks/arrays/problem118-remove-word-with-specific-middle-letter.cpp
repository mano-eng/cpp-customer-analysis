/*

Problem 118

Description:
Removes the first word
whose middle character
matches the given letter.

*/

#include<iostream> 
using namespace std; 
 
void solve(char X[], char L) 
{ 
    int len = 0; 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int start, end; 
 
    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            start = i; 
            end = i; 
 
            while(X[end] != ' ' && X[end] != '\0') 
            { 
                end++; 
            } 
 
            int wordLen = end - start; 
            int mid = start + (wordLen / 2); 
 
            if(X[mid] == L) 
            { 
                int shift; 
 
                if(X[end] == ' ') 
                { 
                    shift = end + 1; 
                } 
                else 
                { 
                    shift = end; 
                } 
 
                for(int j = start; shift <= len; j++) 
                { 
                    X[j] = X[shift]; 
                    shift++; 
                } 
 
                break; 
            } 
        } 
    } 
} 
 
int main() 
{ 
    char X[200]; 
    char L; 
 
    gets_s(X, 200); 
    cin >> L; 
 
    solve(X, L); 
 
    cout << X; 
 
    return 0; 
}