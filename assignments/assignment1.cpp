#include<iostream>
using namespace std;
class student
{
    private:
  char name[20];
  int roll;
  char address[20];
  char phone[10];

   public:
   student()
   {
    cout<<"Enter roll number:"<<endl;
    cin>>roll;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter your address:"<<endl;
    cin>>address;
   }
   void getdata()
   {
    cout<<"enter your phone number:";
    cin>>phone;
   }
    void showdata();
};
void student ::showdata()
{
    cout<<"roll:"<<roll<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"address:"<<address<<endl;
}
int main()
{
    student s1,s2;
    s1.showdata();
    s1.getdata();

    s2.showdata();
}