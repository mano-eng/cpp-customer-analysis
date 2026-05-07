#include <iostream>
using namespace std;

int main()
{
    char X[100];
    char oldChar, newChar;

   
    gets(X);

   
    cin >> oldChar;

   
    cin >> newChar;

   
    for(int i = 0; X[i] != '\0'; i++)
    {
        if(X[i] == oldChar)
            X[i] = newChar;
    }

   
    cout << X;

    return 0;
}