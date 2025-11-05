#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    sum = c1.add(c2);
    cout << "Sum = ";
    sum.display();
    return 0;
}
