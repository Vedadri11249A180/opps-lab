#include<iostream>
using namespace std;

class Time {
private:
    int hours, minutes;

public:
    void getTime();
    void displayTime();
    void addTime(Time t1, Time t2);
};
void Time::getTime() {
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
}
void Time::addTime(Time t1, Time t2) {
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours += t1.hours + t2.hours;
}
void Time::displayTime() {
    cout << "Hours: " << hours << ", Minutes: " << minutes << endl;
}
 int main() {
    Time T1, T2, T3;

    T1.getTime();
    T2.getTime();
    T3.addTime(T1, T2);
    cout << "\nTime 1: ";
    T1.displayTime();
    cout << "Time 2: ";
    T2.displayTime();
    cout << "Sum of Time 1 and Time 2: ";
    T3.displayTime();
    
    return 0;
}