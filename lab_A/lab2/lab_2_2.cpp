#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int getnum()
{
    int b;
    cout<<"enter value:"<<endl;
    cin>>b;
    return b;
}

int main()
{
    int numa=getnum();
    int numb=getnum();
    cout<<"values before swaping:"<<numa<<","<<numb<<endl;
    swap(numa,numb);
    cout<<"values after swaping:"<<numa<<","<<numb;
    return 0;
}
