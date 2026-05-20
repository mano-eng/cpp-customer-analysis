/* 
Problem 109

Description:
Finds words N-1 and N in the string,
then interleaves their letters together
inside the same string.
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
 
    // find words 
    int word = 0; 
    int start1, end1; 
    int start2, end2; 
 
    for(int i = 0; i < len; i++) 
    { 
        // beginning of word 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            word++; 
 
            // word N-1
            if(word == N - 1) 
            { 
                start1 = i; 

                end1 = start1; 

                while(X[end1] != ' ' && X[end1] != '\0') 
                { 
                    end1++; 
                } 
            } 
 
            // word N
            if(word == N) 
            { 
                start2 = i; 

                end2 = start2; 

                while(X[end2] != ' ' && X[end2] != '\0') 
                { 
                    end2++; 
                } 

                break; 
            } 
        } 
    } 
 
    // lengths
    int len1 = end1 - start1; 
    int len2 = end2 - start2; 
 
    // shift right
    int extra = len1; 

    for(int i = len; i >= end1; i--) 
    { 
        X[i + extra] = X[i]; 
    } 

    len += extra; 
 
    // update second word position
    start2 += extra; 
    end2 += extra; 
 
    // interleave
    int mn; 

    if(len1 < len2) 
        mn = len1; 
    else 
        mn = len2; 
 
    int p = start1; 
 
    // common part
    for(int i = 0; i < mn; i++) 
    { 
        X[p] = X[start1 + i]; 
        p++; 

        X[p] = X[start2 + i]; 
        p++; 
    } 
 
    // remaining from second word
    for(int i = mn; i < len2; i++) 
    { 
        X[p] = X[start2 + i]; 
        p++; 
    } 
 
    // remaining from first word
    for(int i = mn; i < len1; i++) 
    { 
        X[p] = X[start1 + i]; 
        p++; 
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