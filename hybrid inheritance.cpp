#include <iostream>
using namespace std;

// Base class
class Student {
public:
    int rollNo;
    void getStudent() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void showStudent() {
        cout << "Roll number: " << rollNo << endl;
    }
};

class Marks : public Student {
public:
    int math, science;
    void getMarks() {
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Science marks: ";
        cin >> science;
    }
    void showMarks() {
        cout << "Math marks: " << math << endl;
        cout << "Science marks: " << science << endl;
    }
};

class Sports {
public:
    int score;
    void getScore() {
        cout << "Enter Sports score: ";
        cin >> score;
    }
    void showScore() {
        cout << "Sports score: " << score << endl;
    }
};

class Result : public Marks, public Sports {
public:
    int total;
    void display() {
        total = math + science + score;
        showStudent();
        showMarks();
        showScore();
        cout << "Total score: " << total << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.getScore();

    cout << endl << "----- RESULT -----" << endl;
    r.display();

    return 0;
}
