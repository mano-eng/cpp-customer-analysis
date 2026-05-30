/*

Problem 136

Description:
Reverses every word
in the string individually
while preserving
the original word order.

*/

#include <iostream>
using namespace std;

void solve(char X[], char Y[])
{
    // length

    int len = 0;

    while(X[len] != '\0')
    {
        len++;
    }

    int pos = 0;

    // find words

    for(int i = 0; i < len; i++)
    {
        // beginning of word

        if(i == 0 || X[i - 1] == ' ')
        {
            int start = i;

            while(X[i] != ' ' && X[i] != '\0')
            {
                i++;
            }

            int end = i - 1;

            // reverse word

            for(int j = end; j >= start; j--)
            {
                Y[pos] = X[j];

                pos++;
            }

            // add space

            if(X[i] == ' ')
            {
                Y[pos] = ' ';

                pos++;
            }
        }
    }

    Y[pos] = '\0';
}

int main()
{
    char X[200];
    char Y[200];

    gets(X);

    solve(X, Y);

    cout << Y;

    return 0;
}