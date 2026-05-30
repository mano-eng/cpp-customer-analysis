/*

Problem 135

Description:
Extracts the first and last words
into one string,
and stores the reversed middle words
in another string.

*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], char Y[], char Z[]) 
{ 
    // length 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    // first word 
 
    int start1 = 0; 
    int end1 = 0; 
 
    while(X[end1] != ' ' && X[end1] != '\0') 
    { 
        end1++; 
    } 
 
    end1--; 
 
    // last word 
 
    int start2; 
    int end2 = len - 1; 
 
    while(end2 >= 0 && X[end2] != ' ') 
    { 
        end2--; 
    } 
 
    start2 = end2 + 1; 
    end2 = len - 1; 
 
    // copy first and last words to Z 
 
    int j = 0; 
 
    for(int i = start1; i <= end1; i++) 
    { 
        Z[j] = X[i]; 
        j++; 
    } 
 
    Z[j] = ' '; 
    j++; 
 
    for(int i = start2; i <= end2; i++) 
    { 
        Z[j] = X[i]; 
        j++; 
    } 
 
    Z[j] = '\0'; 
 
    // reverse words between first and last 
 
    j = 0; 
 
    int start, end; 
 
    for(int i = 0; i < len; i++) 
    { 
        // beginning of word 
 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            start = i; 
 
            end = start; 
 
            while(X[end] != ' ' && X[end] != '\0') 
            { 
                end++; 
            } 
 
            end--; 
 
            // word between first and last 
 
            if(start > end1 && end < start2) 
            { 
                for(int k = end; k >= start; k--) 
                { 
                    Y[j] = X[k]; 
                    j++; 
                } 
 
                Y[j] = ' '; 
                j++; 
            } 
        } 
    } 
 
    Y[j - 1] = '\0'; 
} 
 
int main() 
{ 
    char X[200]; 
    char Y[200]; 
    char Z[200]; 
 
    gets(X); 
 
    solve(X, Y, Z); 
 
    cout << Y << endl; 
    cout << Z; 
 
    return 0; 
}