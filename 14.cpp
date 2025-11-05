#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    void input() {
        cout << "Enter hours and minutes: ";
        cin >> hours >> minutes;
    }
    bool operator>(Time t) {
        if (hours > t.hours) return true;
        if (hours == t.hours && minutes > t.minutes) return true;
        return false;
    }
    void display() {
        cout << hours << " hrs " << minutes << " mins";
    }
};

int main() {
    Time t1, t2;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();

    cout << "\nComparing times...\n";
    if (t1 > t2) {
        t1.display();
        cout << " is greater than ";
        t2.display();
    } else {
        t2.display();
        cout << " is greater than or equal to ";
        t1.display();
    }
    cout << endl;
    return 0;
}
