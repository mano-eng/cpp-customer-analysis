/* 
Problem 108

Description:
Finds the Nth word in the string,
then repeats every vowel letter
inside that word.
*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], int N) 
{ 
    // find length 
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
        // beginning of word 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            word++; 
 
            // nth word 
            if(word == N) 
            { 
                start = i; 
                end = start; 

                while(X[end] != ' ' && X[end] != '\0') 
                { 
                    end++; 
                } 

                break; 
            } 
        } 
    } 
 
    // repeat vowels 
    for(int j = start; j < end; j++) 
    { 
        // vowel check
        if(X[j] == 'a' || 
           X[j] == 'e' || 
           X[j] == 'i' || 
           X[j] == 'o' || 
           X[j] == 'u' || 
           X[j] == 'A' || 
           X[j] == 'E' || 
           X[j] == 'I' || 
           X[j] == 'O' || 
           X[j] == 'U') 
        { 
            // shift right
            for(int k = len; k >= j; k--) 
            { 
                X[k + 1] = X[k]; 
            } 
 
            // repeat vowel
            X[j + 1] = X[j]; 

            len++; 
            end++; 
            j++; 
        } 
    } 
 
    // end string 
    X[len] = '\0'; 
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