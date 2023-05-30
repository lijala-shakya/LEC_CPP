#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    char name[20];
    char phone[10];
    
    public:
    void getdata()
    {
        cout<<"Enter roll number:"<<endl;
        cin>>roll;
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your phone number:"<<endl;
        cin>>phone;
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<roll<<endl;
        cout<<"phone number:"<<phone<<endl;
    }
};

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"First student"<<endl; 
    s1.showdata();
    cout<<"Second student"<<endl;
    s2.showdata();
    return 0;
}