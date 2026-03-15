/* Problem 48
   Read N numbers and a number K.
   Calculate the average of numbers divisible by K.
*/

#include <iostream>
using namespace std;

int main()
{
    int N, K, num;
    int sum = 0, count = 0;

    cin >> N >> K;

    for(int i = 0; i < N; i++)
    {
        cin >> num;

        if(num % K == 0)
        {
            sum += num;
            count++;
        }
    }

    if(count > 0)
        cout << sum / count;
    else
        cout << 0;

    return 0;
}