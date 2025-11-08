#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int rollNo;  
void getStudent()
    {
        cout << "Enter student's name: ";
        getline(cin, name); 

        cout << "Enter student's roll number: ";
        cin >> rollNo;
        cin.ignore(); 
    }
    void displayStudent() const
    {
        cout << "\nStudent Name: " << name;
        cout << "\nStudent Roll Number: " << rollNo;
    }
};
class Address : public Student
{
public:
    string city; 

    void getAddress()
    {
        getStudent(); 

        cout << "Enter city name: ";
        getline(cin, city); 
    }

   
    void displayAddress() const
    {
        displayStudent(); 
        cout << "\nCity: " << city;
    }
};


int main()
{
    Address a1;
   a1.getAddress();
   a1.displayAddress();

    cout << "\n\nPress ENTER to exit..."; 
    cin.get(); 

    return 0;
}
