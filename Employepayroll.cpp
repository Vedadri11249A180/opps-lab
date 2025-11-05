#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float basic, hra, da, gross;
public:
    void input() {
        cout << "Enter ID, Name, Basic Salary: ";
        cin >> id >> name >> basic;
    }
    void calculate() {
        hra = 0.2 * basic;
        da = 0.1 * basic;
        gross = basic + hra + da;
    }
    void display() {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nGross Salary: " << gross << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}
