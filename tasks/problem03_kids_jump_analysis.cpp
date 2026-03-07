/*
Program: Kids Jump Analysis

Description:
This program reads data for several kids including gender, age,
training duration, and jump heights. It calculates the average
duration for boys and counts successive kids who have the same
age and the same maximum jump height.
*/

#include <iostream>  
using namespace std;  
  
int main()  
{  
    int nK;  
    cin >> nK;  
  
    char gender;  
    int age, duration, jumps, height;  
  
    double sum = 0;  
    int ct = 0;  
  
    int prevAge, prevMax = -1;  
    int countSame = 0;  
  
    for (int i = 0; i < nK; i++)  
    {  
        cin >> gender >> age >> duration >> jumps;  
  
        int maxH = 0;   // maximum jump height for the kid  
  
        for (int j = 0; j < jumps; j++)  
        {  
            cin >> height;  
  
            if (height > maxH)  
                maxH = height;  
        }  
  
        // calculate average duration for boys  
        if (gender == 'B')  
        {  
            sum += duration;  
            ct++;  
        }  
  
        // count successive kids with same age and max jump  
        if (i > 0)  
        {  
            if (age == prevAge && maxH == prevMax)  
                countSame++;  
        }  
  
        prevAge = age;  
        prevMax = maxH;  
    }  
  
    // print average duration  
    if (ct > 0)  
        cout << "Average = " << sum / ct << endl;  
    else  
        cout << "Average = 0" << endl;  
  
    // print number of successive kids  
    cout << "Count = " << countSame << endl;  
  
    return 0;  
}
