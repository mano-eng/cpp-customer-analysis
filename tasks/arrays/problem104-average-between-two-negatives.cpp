/* 
Problem 104

Description:
Finds the first two negative values in the array,
calculates the average of values between them,
then adds the average to odd values only.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int Y[10]; 
 
    // read array 
    for(int i = 0; i < 10; i++) 
    { 
        cin >> Y[i]; 
    } 
 
    int firstNeg; 
    int secondNeg; 
 
    int countNeg = 0; 
 
    // find first and second negatives
    for(int i = 0; i < 10; i++) 
    { 
        if(Y[i] < 0) 
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
 
    // calculate average
    int sum = 0; 
    int count = 0; 
 
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        sum += Y[i]; 
        count++; 
    } 
 
    int avg = sum / count; 
 
    // add average to odd values
    for(int i = firstNeg + 1; i < secondNeg; i++) 
    { 
        if(Y[i] % 2 != 0) 
        { 
            Y[i] += avg; 
        } 
    } 
 
    // print array
    for(int i = 0; i < 10; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}