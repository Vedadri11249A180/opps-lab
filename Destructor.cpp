#include<iostream>
using namespace std;
class student{
    public:
    student(){
    cout<<"constructor called!"<<endl;
    }
    ~student(){
        cout<<"Destructor called!"<<endl;
    }
    void display(){
        cout<<"Inside disply function."<<endl;
}
};
int main(){
    cout<<"Creating object ld"<<endl;
    student s1;
    s1.display();
    cout<<"Exiting main..."<<endl;
    return 0;
}
