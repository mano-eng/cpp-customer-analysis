/* 
Problem 106

Description:
Finds the first two negative values,
calculates averages between them,
modifies odd values,
then applies multiple transformations
to the whole array.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[100]; 
 
    // ================= a ================= 
    // read array 
    for(int i = 0; i < 100; i++) 
    { 
        cin >> X[i]; 
    } 
 
    // ================= b ================= 
    // find first and second negative
    int firstNeg, secondNeg; 
    int countNeg = 0; 
 
    for(int i = 0; i < 100; i++) 
    { 
        if(X[i] < 0) 
        { 
            countNeg++; 
 
            if(countNeg == 1) 
            { 
                firstNeg = i; 
            } 
 
            if(countNeg == 2) 
            { 
                secondNeg = i; 
            } 
        } 
    } 
 
    // ================= c ================= 
    // calculate average between negatives
    int sum = 0; 
    int count = 0; 
 
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        sum += X[i]; 
        count++; 
    } 
 
    float avg = (float)sum / count; 
 
    // ================= d ================= 
    // add avg to odd values
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        if(X[i] % 2 != 0) 
        { 
            X[i] += avg; 
        } 
    } 
 
    // ================= e ================= 
    // calculate avg2 after modification
    sum = 0; 
    count = 0; 
 
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        sum += X[i]; 
        count++; 
    } 
 
    float avg2 = (float)sum / count; 
 
    // ================= f ================= 
    // add avg2 to all cells
    for(int i = 0; i < 100; i++) 
    { 
        X[i] += avg2; 
    } 
 
    // ================= g ================= 
    // read new values for second half
    for(int i = 50; i < 100; i++) 
    { 
        cin >> X[i]; 
    } 
 
    // ================= h ================= 
    // find negatives again
    countNeg = 0; 
 
    for(int i = 0; i < 100; i++) 
    { 
        if(X[i] < 0) 
        { 
            countNeg++; 
 
            if(countNeg == 1) 
            { 
                firstNeg = i; 
            } 
 
            if(countNeg == 2) 
            { 
                secondNeg = i; 
            } 
        } 
    } 
 
    // ================= i ================= 
    // calculate avg3
    sum = 0; 
    count = 0; 
 
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        sum += X[i]; 
        count++; 
    } 
 
    float avg3 = (float)sum / count; 
 
    // ================= j ================= 
    // add avg3 to all cells
    for(int i = 0; i < 100; i++) 
    { 
        X[i] += avg3; 
    } 
 
    // print final array
    for(int i = 0; i < 100; i++) 
    { 
        cout << X[i] << " "; 
    } 
 
    return 0; 
}