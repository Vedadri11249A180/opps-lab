#include<iostream>
using namespace std;
 class book{
    private:
    int accno,pages;
    char author[10],isbno[20],bookname[10];
    float price;
     
    public:
    void getdata(){
        cout<<"Enter the accno of book";
        cin>>accno;
        cout<<"Enter the pages of book";
        cin>>pages;
        cout<<"Enter the author name";
        cin>>author;
        cout<<"Enter ythe ISBNO of book";
        cin>>isbno;
        cout<<"Enter the book name";
        cin>>bookname;
        cout<<"Enter the  price of book";
        cin>>price;
     }
     void dispaly()
     {
        cout<<"\nBOOK NAME:"<<bookname;
        cout<<"\nACCNO:"<<isbno;
        cout<<"\nAuthor:"<<author;
        cout<<"\nPAGES"<<pages;
        cout<<"\nISBNO:"<<isbno;
        cout<<"\nPIRCE:"<<price;
     }
    };
    int main(){
      book b;
      b.getdata();
      b.dispaly();
    }
