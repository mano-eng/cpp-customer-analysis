/*
Problem 31: Hotel Conference Room Cost

Description:
A hotel has four types of conference rooms. The price of each chair
depends on the room type:

Type A = 20$
Type B = 12$
Type C = 18$
Type D = 14$

The customer can also rent accessories:
- Overhead Projector: 10$ per hour
- Standing Microphone and Speakers: 30$ for the whole day
- Video Recorder: 25$ per hour

The program asks the customer about:
- Room type
- Number of chairs
- Projector hours
- Whether microphone and speakers are needed
- Video recorder hours

Then it calculates and displays the total meeting cost.
*/

#include <iostream>
using namespace std;

int main()
{
    char roomType;
    int chairs;

    int projectorHours;
    int videoHours;

    char microphone;

    double price = 0;

    cin >> roomType;
    cin >> chairs;

    // room price
    if(roomType == 'A')
        price += chairs * 20;
    else if(roomType == 'B')
        price += chairs * 12;
    else if(roomType == 'C')
        price += chairs * 18;
    else if(roomType == 'D')
        price += chairs * 14;

    // projector
    cin >> projectorHours;
    price += projectorHours * 10;

    // microphone
    cin >> microphone;
    if(microphone == 'y')
        price += 30;

    // video recorder
    cin >> videoHours;
    price += videoHours * 25;

    cout << "Total meeting cost = " << price << endl;

    return 0;
}