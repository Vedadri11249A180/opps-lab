#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void input() {
        cout << "Enter number: ";
        cin >> x;
    }
    void display() {
        cout << "Value: " << x << endl;
    }
    void operator-() {
        x = -x;
    }
};

int main() {
    Number n;
    n.input();
    -n;
    n.display();
    return 0;
}
