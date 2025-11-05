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
    void operator++() { x++; }      // Prefix increment
    void operator--() { x--; }      // Prefix decrement
};

int main() {
    Number n;
    n.input();
    ++n;
    n.display();
    --n;
    n.display();
    return 0;
}
