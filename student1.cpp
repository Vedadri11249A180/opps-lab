#include<iostream>
using namespace std;

class student{

    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float Avg;

    public:
        void getdata(){
            cout<<"Enter the student rollno";
            cin>>rollno;
            cout<<"Enter the name of student";
            cin>>name;
            cout<<"Enter the 3 Makrs of student";
            cin>>m1>>m2>>m3;
         }
         void calculate()
         {
            total=m1+m2+m3;
            Avg=total/3;
         }
          void display()
          {
            cout<<"\n ROLLNO:"<<rollno;
            cout<<"\n NAME:"<<name;
            cout<<"\n MARK1:"<<m1;
            cout<<"\n MARK2:"<<m2;
            cout<<"\n MARK3:"<<m3;
            cout<<"\n TOTAL:"<<total;
            cout<<"\n AVG:"<<Avg;
            if(m1>=50&&m2>50&&m3>=50)
            {
                cout<<"PASS";
            }
            else
            {
               cout<<"FAIL";
            
            }
            
          }
};
int main(){
    student s;
    s.getdata();
    s.calculate();
    s.display();
}
