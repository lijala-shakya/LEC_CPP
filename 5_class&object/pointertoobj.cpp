#include<iostream>
using namespace std;
class employee
{
    private:
     char name[25];
     float salary;
     public:
     void getdata()
     {
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter salary:"<<endl;
        cin>>salary;
     }
     void showdata()
     {
       cout<<"\nName:"<<name<<endl;
       cout<<"salary:"<<salary;
     }
};
int main()
{
    employee *em1;
    employee e;
    em1 =&e;
    em1->getdata();
    cout<<"\nAccessing data through pointer variable:";
    em1->showdata();
   return 0;
}

//vscode shotcuts