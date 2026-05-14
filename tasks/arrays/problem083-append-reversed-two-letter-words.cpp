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

    int i = 0;

    while(i < len)

    {

        int start = i;

        // move to end of word

        while(X[i] != ' ' && X[i] != '\0')

        {

            i++;

        }

        int wordLen = i - start;

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

        if(X[i] != '\0')

        {

            i++;

        }

    }

    X[len] = '\0';

}

int main()

{

    char X[300];

    gets(X);

    solve(X);

    cout << X;

    return 0;

}