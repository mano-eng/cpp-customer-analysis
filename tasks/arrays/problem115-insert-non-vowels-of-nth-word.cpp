/*

Problem 115

Description:
Takes the non-vowel letters
from the Nth word and inserts them
at the beginning of the same string.

*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], int N) 
{ 
    // ================= length ================= 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    // ================= find nth word ================= 
 
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
 
    // ================= count non vowels ================= 
 
    int ct = 0; 
 
    for(int i = start; i < end; i++) 
    { 
        if(X[i] != 'a' && 
           X[i] != 'e' && 
           X[i] != 'i' && 
           X[i] != 'o' && 
           X[i] != 'u' && 
           X[i] != 'A' && 
           X[i] != 'E' && 
           X[i] != 'I' && 
           X[i] != 'O' && 
           X[i] != 'U') 
        { 
            ct++; 
        } 
    } 
 
    // ================= shift right ================= 
 
    for(int i = len; i >= 0; i--) 
    { 
        X[i + ct] = X[i]; 
    } 
 
    len += ct; 
 
    X[len] = '\0'; 
 
    // ================= insert non vowels ================= 
 
    int pos = 0; 
 
    for(int i = start + ct; i < end + ct; i++) 
    { 
        if(X[i] != 'a' && 
           X[i] != 'e' && 
           X[i] != 'i' && 
           X[i] != 'o' && 
           X[i] != 'u' && 
           X[i] != 'A' && 
           X[i] != 'E' && 
           X[i] != 'I' && 
           X[i] != 'O' && 
           X[i] != 'U') 
        { 
            X[pos] = X[i]; 
            pos++; 
        } 
    } 
} 
 
int main() 
{ 
    char X[200]; 
 
    int N; 
 
    gets_s(X); 
 
    cin >> N; 
 
    solve(X, N); 
 
    cout << X; 
 
    return 0; 
}