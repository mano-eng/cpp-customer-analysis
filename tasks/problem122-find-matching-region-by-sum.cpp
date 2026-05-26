/*

Problem 122

Description:
Finds a region in one array
having the same length and sum
as a selected region in another array,
then reads values outside that region.

*/

#include <iostream> 
using namespace std; 
 
// calculate total 
int total(int arr[], int S, int E) 
{ 
    int sum = 0; 
    for(int i = S; i <= E; i++) 
    { 
        sum += arr[i]; 
    } 
    return sum; 
} 
 
// find region in Y 
void findRegion(int Y[], int size, int len, int sum, int &S, int &E) 
{ 
    for(int i = 0; i <= size - len; i++) 
    { 
        int tot = 0; 
        for(int j = i; j < i + len; j++) 
        { 
            tot += Y[j]; 
        } 
        if(tot == sum) 
        { 
            S = i; 
            E = i + len - 1; 
            return; 
        } 
    } 
} 
 
// read except region 
void readExcept(int arr[], int size, int S, int E) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        if(i < S || i > E) 
        { 
            cin >> arr[i]; 
        } 
    } 
} 
 
// total of last 50 cells 
int last50(int arr[], int size) 
{ 
    int sum = 0; 
    for(int i = size - 50; i < size; i++) 
    { 
        sum += arr[i]; 
    } 
    return sum; 
} 
 
// read array 
void read(int arr[], int size) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        cin >> arr[i]; 
    } 
} 
 
int main() 
{ 
    int X[200]; 
    int Y[200]; 
    int Q[200]; 
 
    // read X and Y 
    read(X, 200); 
    read(Y, 200); 
 
    int S, E; 
 
    // region in X 
    cin >> S >> E; 
    int len = E - S + 1; 
    int sum = total(X, S, E); 
 
    // find same region in Y 
    int SY, EY; 
    findRegion(Y, 200, len, sum, SY, EY); 
 
    // read Y except found region 
    readExcept(Y, 200, SY, EY); 
 
    // total of last 50 in Y 
    int totalY = last50(Y, 200); 
 
    // read Q 
    read(Q, 200); 
 
    // total of last 50 in Q 
    int totalQ = last50(Q, 200); 
 
    // region in Q 
    cin >> S >> E; 
    len = E - S + 1; 
    sum = total(Q, S, E); 
 
    // find same region in Y 
    findRegion(Y, 200, len, sum, SY, EY); 
 
    // read Y except found region 
    readExcept(Y, 200, SY, EY); 
 
    // read new X 
    read(X, 200); 
 
    // total of last 50 in X 
    int totalX = last50(X, 200); 
 
    // region in X 
    cin >> S >> E; 
    len = E - S + 1; 
    sum = total(X, S, E); 
 
    // find same region in Y 
    findRegion(Y, 200, len, sum, SY, EY); 
 
    // read Y except found region 
    readExcept(Y, 200, SY, EY); 
 
    return 0; 
}