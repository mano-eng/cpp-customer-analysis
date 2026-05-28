/*

Problem 133

Description:
Copies increasing numbers
of characters from each word
into a new string.

*/

#include <iostream>  
using namespace std;  
  
void solve(char X[], char Y[])  
{  
    int len = 0;  
  
    while(X[len] != '\0')  
    {  
        len++;  
    }  
  
    int word = 0;  
  
    int j = 0;  
  
    for(int i = 0; i < len; i++)  
    {  
        // beginning of word  
  
        if(i == 0 || X[i - 1] == ' ')  
        {  
            word++;  
  
            int ct = 0;  
  
            while(X[i] != ' ' && X[i] != '\0')  
            {  
                if(ct < word)  
                {  
                    Y[j] = X[i];  
  
                    j++;  
                }  
  
                ct++;  
  
                i++;  
            }  
  
            Y[j] = ' ';  
  
            j++;  
        }  
    }  
  
    Y[j - 1] = '\0';  
}  
  
int main()  
{  
    char X[200];  
  
    char Y[200];  
  
    gets(X);  
  
    solve(X,Y);  
  
    cout << Y;  
  
    return 0;  
}