/* 
Problem 068

Description:
Copies a substring from the first string and appends
a reversed substring from the second string.
*/

#include <iostream>
using namespace std;

int main()
{
    char X[300];
    char Y[300];
    char Z[600];

    gets(X);
    gets(Y);

    int s1, e1;
    int s2, e2;

    cin >> s1 >> e1;
    cin >> s2 >> e2;

    int j = 0;

    for(int i = s1; i <= e1; i++)
    {
        Z[j] = X[i];
        j++;
    }

    Z[j] = ' ';
    j++;

    for(int i = e2; i >= s2; i--)
    {
        Z[j] = Y[i];
        j++;
    }

    Z[j] = '\0';

    cout << Z;

    return 0;
}