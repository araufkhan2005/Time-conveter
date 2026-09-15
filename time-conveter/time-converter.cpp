#include <iostream>
using namespace std;
class TimeConverter
{
public:
    void convertTohour()
    {
        int seconds, hour, minutes, remainingSeconds;

        cout << "Enter Total Seconds: ";
        cin >> seconds;

        hour = seconds / 3600;

        remainingSeconds = seconds - (hour * 3600);

        minutes = remainingSeconds / 60;

        remainingSeconds = remainingSeconds % 60;



        cout << "HH:MM:SS => " << hour << ":" << minutes << ":" << remainingSeconds << endl;
    }
    void convertToSeconds()
    {
        int hour, minutes, seconds,totalSeconds;
          cout << "Enter Hours : ";
        cin >> hour;
        cout << "Enter Minutes : ";
        cin >> minutes;
        cout << "Enter Seconds : ";
        cin >> seconds;

        totalSeconds = hour * 3600;

        totalSeconds = totalSeconds + (minutes * 60);

        totalSeconds = totalSeconds + seconds;

        cout << "Total Seconds: " << totalSeconds << endl;
    }
};
int main()
{
    TimeConverter t1;
    int choice;

    cout << "1. Seconds to HH:MM:SS" << endl;
    cout << "2. HH:MM:SS to Seconds" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        t1.convertTohour();
        break;

    case 2:
        t1.convertToSeconds();
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}