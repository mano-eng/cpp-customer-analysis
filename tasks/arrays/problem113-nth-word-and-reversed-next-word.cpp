/*

Problem 113

Description:
Takes the Nth word from the string
and appends the reversed next word
into a new string.

*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], int N, char Y[]) 
{ 
    // ================= length ================= 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    // ================= find words ================= 
 
    int word = 0; 
 
    int start1, end1; 
    int start2, end2; 
 
    for(int i = 0; i < len; i++) 
    { 
        // beginning of word 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            word++; 
 
            // nth word 
            if(word == N) 
            { 
                start1 = i; 
 
                end1 = i; 
 
                while(X[end1] != ' ' && X[end1] != '\0') 
                { 
                    end1++; 
                } 
            } 
 
            // word after nth 
            if(word == N + 1) 
            { 
                start2 = i; 
 
                end2 = i; 
 
                while(X[end2] != ' ' && X[end2] != '\0') 
                { 
                    end2++; 
                } 
 
                break; 
            } 
        } 
    } 
 
    // ================= copy nth word ================= 
 
    int pos = 0; 
 
    for(int i = start1; i < end1; i++) 
    { 
        Y[pos] = X[i]; 
        pos++; 
    } 
 
    // space 
    Y[pos] = ' '; 
    pos++; 
 
    // ================= reverse next word ================= 
 
    for(int i = end2 - 1; i >= start2; i--) 
    { 
        Y[pos] = X[i]; 
        pos++; 
    } 
 
    // end string 
    Y[pos] = '\0'; 
} 
 
int main() 
{ 
    char X[200]; 
 
    char Y[200]; 
 
    int N; 
 
    gets_s(X); 
 
    cin >> N; 
 
    solve(X, N, Y); 
 
    cout << Y; 
 
    return 0; 
}