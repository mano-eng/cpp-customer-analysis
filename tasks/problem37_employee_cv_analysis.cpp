/*
Problem 37: Employee CV Analysis

Description:
This program reads information for 500 employees' CVs.

For each employee we read:
1) Age of the employee.
2) Number of training courses taken.
3) Number of working years.

The program determines:
- The oldest employee.
- The average number of courses for employees who worked more than 10 years.
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    int courses;
    int workingYears;

    int maxAge = -999;
    int position = 0;

    int count = 0;
    int totalCourses = 0;

    for(int i = 1; i <= 500; i++)
    {
        cin >> age;
        cin >> courses;
        cin >> workingYears;

        // find oldest employee
        if(age > maxAge)
        {
            maxAge = age;
            position = i;
        }

        // employees working more than 10 years
        if(workingYears > 10)
        {
            count++;
            totalCourses += courses;
        }
    }

    double averageCourses = totalCourses / count;

    cout << "Oldest employee CV position = " << position << endl;
    cout << "Average courses (working >10 years) = " << averageCourses << endl;

    return 0;
}