/*

Problem 126

Description:
Counts the odd values
in the array
and counts pairs of
contiguous odd values.

*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    int oddCount = 0; 
 
    int contCount = 0; 
 
    for(int i = 0; i < N; i++) 
    { 
        // odd value 
 
        if(X[i] % 2 != 0) 
        { 
            oddCount++; 
        } 
 
        // 2 contiguous odd values 
 
        if(i < N - 1) 
        { 
            if(X[i] % 2 != 0 && X[i + 1] % 2 != 0) 
            { 
                contCount++; 
            } 
        } 
    } 
 
    cout << "# of odds in the array = "; 
 
    cout << oddCount << endl; 
 
    cout << "# of 2 contiguous odds = "; 
 
    cout << contCount; 
}

int main()
{
    int X[200];

    int N;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    solve(X,N);

    return 0;
}