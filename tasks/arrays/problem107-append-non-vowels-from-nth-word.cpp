/* 
Problem 107

Description:
Finds the Nth word in the string,
then appends only the non-vowel letters
of that word to the end of the string.
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
 
    // add space
    X[len] = ' '; 
    len++; 
 
    // copy non-vowels
    for(int j = start; j < end; j++) 
    { 
        if(X[j] != 'a' && 
           X[j] != 'e' && 
           X[j] != 'i' && 
           X[j] != 'o' && 
           X[j] != 'u' && 
           X[j] != 'A' && 
           X[j] != 'E' && 
           X[j] != 'I' && 
           X[j] != 'O' && 
           X[j] != 'U') 
        { 
            X[len] = X[j]; 
            len++; 
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