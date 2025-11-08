#include <iostream>
#include <string>  // for using string type

using namespace std;

class Student {
private:
    string name;
    int rno;

public:
    void getStudent() {
        cout << "Enter name of the student: ";
        getline(cin, name);

        cout << "Enter roll number of the student: ";
        cin >> rno;
        cin.ignore(); // clear buffer
    }

    void displayStudent() {
        cout << "\nName of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

// ---------- TEST CLASS ----------
class Test : public Student {
protected:
    int math, eng, sci;

public:
    void getTest() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter English marks: ";
        cin >> eng;
        cout << "Enter Science marks: ";
        cin >> sci;
    }

    void displayTest() {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};

// ---------- RESULT CLASS ----------
class Result : public Test {
private:
    int total;
    float avg;

public:
    void getResult() {
        getTest();
        total = math + eng + sci;
        avg = total / 3.0;
    }

    void displayResult() {
        displayTest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg;
    }
};

// ---------- MAIN FUNCTION ----------
int main() {
    Result r1;

    r1.getResult();

    cout << "\n\n---------- STUDENT RESULT ----------";
    r1.displayResult();

    cout << "\n\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
