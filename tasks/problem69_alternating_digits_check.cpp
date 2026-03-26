 // problem69_alternating_digits_check.cpp
// الفكرة: بنقرأ N أرقام
// وبناخد من كل رقم digit بالتبادل:
// (1 → right) (2 → left) (3 → right) ...
// ونشوف كلهم متساويين ولا لأ

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int val;
    cin >> val;

    int temp;

    // أول رقم → ناخد منه right digit
    temp = val % 10;

    for(int i = 2; i <= N; i++)
    {
        cin >> val;

        int digit;

        if(i % 2 == 1)
        {
            // odd → right digit
            digit = val % 10;
        }
        else
        {
            // even → left digit
            int copy = val;

            while(copy >= 10)
            {
                copy /= 10;
            }

            digit = copy;
        }

        // لو في اختلاف
        if(digit != temp)
        {
            cout << "FALSE";
            return 0;
        }
    }

    // لو كله متساوي
    cout << "TRUE";

    return 0;
}
