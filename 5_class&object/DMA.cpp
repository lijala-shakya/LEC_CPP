#include<iostream>
using namespace std;

int *roll=new int;
char *name=new char[15];

void scanrollandname(){
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter roll number:"<<endl;
    cin>>*roll;
}

void freememory() {
    delete roll;
    delete [] name;
}
void printrollandname()
{
    cout<<endl<<"name:"<<name;
    cout<<endl<<"roll no. :"<<*roll;
}

int main()
{
    scanrollandname();
    cout<<endl<<"Memory allocated dynamically for name and roll :";
    cout<<endl<<"Value of name and roll before delocation";
    printrollandname();
    freememory();
    cout<<"\n\nAfter Dellocation:";
    printrollandname();
    return 0;
}