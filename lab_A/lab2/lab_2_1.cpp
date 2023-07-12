//lab2 swap using reference variable//

#include<iostream>
using namespace std;
int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int getnum()
{
    int a;
    cout<<"enter any values:"<<endl;
    cin>>a;
    return a;
}

int main(void)
{
  int num1=getnum();
  int num2=getnum();
  std::cout<<"values before swaping:"<<num1<<","<<num2<<endl;
  
  std::cout<<"the valus after swaping:"<<num1<<","<<num2<<endl;
  swap(num1,num2);
  return 0;
}
