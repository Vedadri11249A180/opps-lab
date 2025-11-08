#include <iostream>
#include <string> 

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
        cin.ignore();t
    }

    void displayStudent() const {
        cout << "\nName of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class Address {
private:
    string city; 

public:
 
    void getAddress() {
        cout << "Enter city: ";
        cin.ignore(); 
        getline(cin, city);
    }

    void displayAddress() const {
        cout << "\nCity: " << city;
    }
};

class Account : public Student, public Address {
private:
    int tfee;    
    int submit;  
    int balance; 

public:
   
    void getAccount() {
        getStudent();  
        getAddress(); 
        cout << "\nEnter total fee: ";
        cin >> tfee;

        cout << "Enter submitted fee: ";
        cin >> submit;
    }

    void displayAccount() const {
        displayStudent(); 
        displayAddress();

        cout << "\nTotal fee: " << tfee;
        cout << "\nSubmitted fee: " << submit;

        balance = tfee - submit; 
        cout << "\nBalance fee: " << balance;
    }
};

    Account a1; 

    
    a1.getAccount();

    a1.displayAccount();

    cin.ignore();
    cin.get(); 

    return 0;
}
