#include <iostream>
using namespace std;

/*
Description:
This program reads N values from the user.
For each number, it extracts the first 2 odd digits starting from the LEFT.
However, when forming the result, digits are stored in reverse order.

Example:
5215 → odd digits from left = 5 , 1
stored as → 15 (not 51)

So:
- We read digits from left (by reversing the number first)
- We pick the first 2 odd digits
- We add them in reverse order to match the required output
*/

int main()
{
    int N, val;
    cin >> N;

    long long result = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> val;

        int rev = 0;

        // reverse number to process from left
        while (val > 0)
        {
            rev = rev * 10 + (val % 10);
            val /= 10;
        }

        int count = 0;
        int temp = 0; // لتجميع الرقم المؤقت بالعكس

        // extract first 2 odd digits
        while (rev > 0 && count < 2)
        {
            int dig = rev % 10;

            if (dig % 2 == 1)
            {
                temp = temp * 10 + dig; // نجمعهم الأول
                count++;
            }

            rev /= 10;
        }

        // نعكسهم علشان يطلعوا بالترتيب المطلوب
        int finalPart = 0;
        while (temp > 0)
        {
            finalPart = finalPart * 10 + (temp % 10);
            temp /= 10;
        }

        // نضيفهم للنتيجة النهائية
        result = result * 100 + finalPart;
    }

    cout << result;

    return 0;
}
