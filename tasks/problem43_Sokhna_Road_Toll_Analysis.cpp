/*
Problem: Bookstore Analysis

Description:
The program runs for 30 days. Each day the bookstore receives
English and Math books and students come to take books.
The program counts students who take more than 10 Math books
and counts days with shortage in English books.
*/

#include <iostream>
using namespace std;

int main()
{
    int englishBooks, mathBooks;
    int students;
    int needEnglish, needMath;

    int countStudents = 0;
    int shortageDays = 0;

    for(int day = 1; day <= 30; day++)
    {
        cin >> englishBooks >> mathBooks;
        cin >> students;

        bool shortage = false;

        for(int i = 1; i <= students; i++)
        {
            cin >> needEnglish >> needMath;

            if(needMath > 10)
                countStudents++;

            if(needEnglish > englishBooks)
                shortage = true;

            englishBooks -= needEnglish;
            mathBooks -= needMath;
        }

        if(shortage)
            shortageDays++;
    }

    cout << countStudents << endl;
    cout << shortageDays << endl;

    return 0;
}