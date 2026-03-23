// Read N numbers
// Compare each two consecutive numbers
// Take digit i from first number and digit (i+1) from second
// Calculate the difference and add to total
// Print the total of differences#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int num1, num2;
    cin >> num1;

    int total = 0;

    for(int i = 1; i < N; i++)
    {
        cin >> num2;

        int t1 = num1;
        int t2 = num2;

        int c = 1;

        // استخراج digit رقم i من num1
        while(c < i)
        {
            t1 /= 10;
            c++;
        }
        int d1 = t1 % 10;

        c = 1;

        // استخراج digit رقم i+1 من num2
        while(c < i + 1)
        {
            t2 /= 10;
            c++;
        }
        int d2 = t2 % 10;

        total += (d1 - d2);

        num1 = num2;
    }

    cout << total;
    return 0;
}
