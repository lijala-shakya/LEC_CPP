#include<iostream>
using namespace std;
int *roll =new int;
char *name =new char[15];

void scanRollandName()
{
    cout<<"enter your name:"<<endl;
    cin>>name;
    cout<<"enter roll num.:"<<endl;
    cin>>*roll;
}

void freeMemory()
{
   delete roll;
   delete[]name;
}

void printRollandName()
{
    cout<<endl<<"name:"<<name;
    cout<<endl<<"roll:"<<*roll;
}


int main()
{
   scanRollandName();
   cout<<endl<<"memory allocated dynamically for name and roll";
   cout<<endl<<"value of name and roll before deallocation";
   printRollandName();
   freeMemory();
   cout<<"\n\nAfter deallocation:";
   printRollandName();
   return 0;
}