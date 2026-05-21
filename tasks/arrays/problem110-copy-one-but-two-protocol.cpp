/* 
Problem 110

Description:
Applies "Copy One but Two" protocol:
- Copies the first cell from every 3 cells.
- Then copies the remaining two cells.
After that, calculates averages
and counts values smaller than them.
*/

#include <iostream> 
using namespace std; 

// ================= read array =================
void readArray(int X[], int size) 
{ 
    for(int i = 0; i < size; i++) 
    { 
        cin >> X[i]; 
    } 
} 

// ================= Copy One but Two =================
void solve(int X[], int Y[], int size) 
{ 
    int j = 0; 
 
    // first part
    for(int i = 0; i < size; i += 3) 
    { 
        Y[j] = X[i]; 
        j++; 
    } 
 
    // second part
    for(int i = 0; i < size; i += 3) 
    { 
        Y[j] = X[i + 1]; 
        j++; 

        Y[j] = X[i + 2]; 
        j++; 
    } 
} 

// ================= process array =================
void process(int Y[], int size) 
{ 
    int firstPart = size / 3; 
    int secondPart = size - firstPart; 
 
    // average first part
    int sum1 = 0; 

    for(int i = 0; i < firstPart; i++) 
    { 
        sum1 += Y[i]; 
    } 

    float a1 = sum1 / firstPart; 
 
    // average second part
    int sum2 = 0; 

    for(int i = firstPart; i < size; i++) 
    { 
        sum2 += Y[i]; 
    } 

    float a2 = sum2 / secondPart; 
 
    // count < a1
    int ct1 = 0; 

    for(int i = 0; i < size; i++) 
    { 
        if(Y[i] < a1) 
        { 
            ct1++; 
        } 
    } 
 
    // count < a2
    int ct2 = 0; 

    for(int i = 0; i < size; i++) 
    { 
        if(Y[i] < a2) 
        { 
            ct2++; 
        } 
    } 
 
    cout << "a1 = " << a1 << endl; 
    cout << "a2 = " << a2 << endl; 
    cout << "count < a1 = " << ct1 << endl; 
    cout << "count < a2 = " << ct2 << endl; 
} 

// ================= main =================
int main() 
{ 
    int X[300]; 
    int Q[300]; 
    int Y[300]; 
 
    // BOX 1
    readArray(X, 300); 
    solve(X, Y, 300); 
    process(Y, 300); 
 
    // BOX 2
    readArray(Q, 300); 
    solve(Q, Y, 300); 
    process(Y, 300); 
 
    // BOX 3
    readArray(X, 300); 
    solve(X, Y, 300); 
    process(Y, 300); 
 
    // BOX 4
    readArray(Q, 300); 
    solve(Q, Y, 300); 
    process(Y, 300); 
 
    return 0; 
}