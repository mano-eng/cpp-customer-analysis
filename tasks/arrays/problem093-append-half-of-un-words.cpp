/* 
Problem 093

Description:
Finds words that start with "un",
then appends the first half of each word
to the end of the string.
*/
#include <iostream>
using namespace std;
int main()
{
    char X[300];
    gets_s(X, 300);
    // calculate length
    int len = 0;
    while(X[len] != '\0')
    {
        len++;
    }
    for(int i = 0; i < len; i++)
    {
        // بداية كلمة
        if(i == 0 || X[i - 1] == ' ')
        {
            // starts with "un"
            if(X[i] == 'u' && X[i + 1] == 'n')
            {
                int start = i;
                int end = start;
                // move to end of word
                while(X[end] != ' ' && X[end] != '\0')
                {
                    end++;
                }
                int wordLen = end - start;
                int half = wordLen / 2;
                // shift string right
                for(int j = len; j >= end; j--)
                {
                    X[j + half] = X[j];
                }
                // copy first half after word
                for(int j = 0; j < half; j++)
                {
                    X[end + j] = X[start + j];
                }
                len += half;
                i = end + half;
            }
        }
    }
    cout << X;
    return 0;
}
