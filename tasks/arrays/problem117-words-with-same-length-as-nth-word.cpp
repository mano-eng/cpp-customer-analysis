/*

Problem 117

Description:
Copies all words that have
the same length as the Nth word
into a new string.

*/

#include<iostream> 
using namespace std; 
 
void solve(char X[], int N, char Y[]) 
{ 
    // length 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
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
                { 
                    end++; 
                } 
 
                break; 
            } 
        } 
    } 
 
    // length of nth word 
 
    int lenN = end - start; 
 
    // copy words with same length 
 
    int pos = 0; 
 
    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            int start2 = i; 
 
            int end2 = i; 
 
            while(X[end2] != ' ' && X[end2] != '\0') 
            { 
                end2++; 
            } 
 
            int len2 = end2 - start2; 
 
            // same length 
 
            if(len2 == lenN) 
            { 
                for(int j = start2; j < end2; j++) 
                { 
                    Y[pos] = X[j]; 
 
                    pos++; 
                } 
 
                Y[pos] = ' '; 
 
                pos++; 
            } 
        } 
    } 
 
    // remove last space 
 
    Y[pos - 1] = '\0'; 
} 
 
int main() 
{ 
    char X[200]; 
 
    char Y[200]; 
 
    int N; 
 
    gets(X); 
 
    cin >> N; 
 
    solve(X, N, Y); 
 
    cout << Y; 
 
    return 0; 
}