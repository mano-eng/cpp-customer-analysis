/*

Problem 139

Description:
Finds the minimum value
in the array,
then counts how many values
after it are divisible by
that minimum.

*/

#include <iostream> 

using namespace std; 

 

void solve(int X[], int N) 

{ 

    // minimum 

 

    int mn = 999999999; 

 

    int pos; 

 

    for(int i = 0; i < N; i++) 

    { 

        if(X[i] < mn) 

        { 

            mn = X[i]; 

 

            pos = i; 

        } 

    } 

 

    // count after minimum 

 

    int ct = 0; 

 

    for(int i = pos + 1; i < N; i++) 

    { 

        if(X[i] % mn == 0) 

        { 

            ct++; 

        } 

    } 

 

    cout << "Minimum : " << mn << endl; 

 

    cout << "After : " << ct; 

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

 

    solve(X, N); 

 

    return 0; 

}