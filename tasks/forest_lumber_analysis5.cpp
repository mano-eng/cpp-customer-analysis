#include <iostream>
using namespace std;

int main()
{
    int nTrees;              // عدد الأشجار
    cout << "Enter number of trees: ";
    cin >> nTrees;

    int height, lumbers;     // height = ارتفاع الشجرة ، lumbers = عدد الأخشاب
    int minHeight = 999999;  // لتحديد أقصر شجرة
    int lumbersOfShortest;   // عدد الأخشاب للشجرة الأقصر

    // loop تمر على كل الأشجار
    for (int i = 0; i < nTrees; i++)
    {
        cout << "Enter height of tree: ";
        cin >> height;

        cout << "Enter number of lumbers: ";
        cin >> lumbers;

        // متغيرات لحساب المتوسط للأخشاب ذات اللون A
        int sum = 0;     // مجموع الأمتار
        int count = 0;   // عدد الأخشاب لون A

        // loop تمر على كل الأخشاب في هذه الشجرة
        for (int j = 0; j < lumbers; j++)
        {
            char color;   // لون الخشبة (A,B,C)
            int meters;   // عدد الأمتار المنتجة

            cout << "Enter color of lumber (A/B/C): ";
            cin >> color;

            cout << "Enter meters produced: ";
            cin >> meters;

            // لو لون الخشبة A نحسبها في المتوسط
            if (color == 'A')
            {
                sum += meters; // نجمع الأمتار
                count++;       // نزيد عدد الأخشاب
            }
        }

        // حساب المتوسط للأخشاب لون A في هذه الشجرة
        double avg = 0;

        if (count > 0)        // نتأكد إن فيه أخشاب A
            avg = (double)sum / count;

        cout << "Average meters for tree " << i+1 << " = " << avg << endl;

        // تحديد أقصر شجرة
        if (height < minHeight)
        {
            minHeight = height;         // تحديث أقصر ارتفاع
            lumbersOfShortest = lumbers; // حفظ عدد الأخشاب لهذه الشجرة
        }
    }

    // طباعة عدد الأخشاب الناتجة من أقصر شجرة
    cout << "Number of lumbers from the shortest tree = "
         << lumbersOfShortest << endl;

    return 0;
}