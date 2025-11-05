#include <iostream>
using namespace std;

class Student {
    int feet, inches;
public:
    void setHeight(int f, int i) {
        feet = f;
        inches = i;
    }
    bool operator>(const Student& s) const {
        if (feet > s.feet) return true;
        if (feet == s.feet && inches > s.inches) return true;
        return false;
    }
    void display() const {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    Student s1, s2;
    s1.setHeight(5, 10);
    s2.setHeight(6, 1);

    cout << "Comparing students' heights:\n";
    if (s1 > s2) {
        s1.display();
        cout << " is taller than ";
        s2.display();
    } else if (s2 > s1) {
        s2.display();
        cout << " is taller than ";
        s1.display();
    } else {
        s1.display();
        cout << " and ";
        s2.display();
        cout << " have equal height";
    }
    cout << endl;
    return 0;
}
