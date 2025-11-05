#include<iostream>
using namespace std;
class Ebill{
    private:
    int custid,unit;
    char address[50],custname[50];
    float amount;

    public:
    void getcustdata();
    void calculate();
    void print();
};
void Ebill::getcustdata()
    {
        cout<<"Enter the cust id";
        cin>>custid;
        cout<<"Enter the cust Name";
        cin>>custname;
        cout<<"Enter the Address";
        cin>>address;
        cout<<"Enter the no of units";
        cin>>unit;
        cout<<"Enter the Amount:";
        cin>>amount;
         }
void Ebill:: calculate(){
    if(unit<=100)
    amount=0;
else if (unit<=200)
amount=(unit-100)*2.25;
else if(unit<=400)
amount=(100*2.25)+(unit-200)*4.25;
else if (unit<=600)
amount=(100*2.25)+(200*4.45)+(unit-400)*6.0;
else
(100*2.25)+(200*4.45)+(400*6.0)+(unit-500)*9.00;

}
void Ebill::print()
    {
        cout<<"Enter the cust if:"<<custid<<endl;
        cout<<"Enter the no of unit:"<<unit<<endl;
        cout<<"Enter the address:"<<address<<endl;
        cout<<"Enter the cust name:"<<custname<<endl;
        cout<<" Amount:"<<amount<<endl;

    }
int main()
{
    Ebill e;
    e.getcustdata();
    e.calculate();
    e.print();
}
