/* 
Problem 083

Description:
Reads a string and appends the reversed form
of every 2-letter word to the end of the string.
*/
#include <iostream>
using namespace std;

void solve(char X[])
{
    int len = 0;

    // calculate length
    while(X[len] != '\0')
    {
        len++;
    }

    int end = 0;

    while(end < len)
    {
        int start = end;

        // move to end of word
        while(X[end] != ' ' && X[end] != '\0')
        {
            end++;
        }

        int wordLen = end - start;

        // if word length = 2
        if(wordLen == 2)
        {
            X[len] = ' ';
            len++;

            X[len] = X[start + 1];
            len++;

            X[len] = X[start];
            len++;
        }

        // move after space
        if(X[end] != '\0')
        {
            end++;
        }
    }

    X[len] = '\0';
}

int main()
{
    char X[1000];

    gets(X);

    solve(X);

    cout << X;

    return 0;
}
