/*
Problem 28: GPA Average for Two Universities

Description:
The program asks the user to enter the number of students
in MSA University and Cairo University.

Then it reads the GPA of each student for both universities
and calculates the average GPA for each university.
*/

#include <iostream>
using namespace std;

int main()
{
    int msaStudents, cairoStudents;
    double gpa;

    cin >> msaStudents;
    cin >> cairoStudents;

    double sumMSA = 0;
    double sumCairo = 0;

    // MSA students
    for(int i = 0; i < msaStudents; i++)
    {
        cin >> gpa;
        sumMSA += gpa;
    }

    // Cairo University students
    for(int i = 0; i < cairoStudents; i++)
    {
        cin >> gpa;
        sumCairo += gpa;
    }

    double avgMSA = sumMSA / msaStudents;
    double avgCairo = sumCairo / cairoStudents;

    cout << "Average GPA for MSA = " << avgMSA << endl;
    cout << "Average GPA for Cairo University = " << avgCairo << endl;

    return 0;
}