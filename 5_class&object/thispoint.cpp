#include<iostream>
using namespace  std;

class mobile
{
  private:
  int m=10;
  int n=20;
  public:
  void display()
  {
    cout<<"the value of m is:"<<m<<endl;
    cout<<"value of what is"<<this->n<<endl;//gives value of n
    cout<<"value of what is"<<this->m<<endl;//gives value of m
    cout<<"the address of current object is:"<<this;//this gives address of object
  }
};
int main()
{
    mobile m1,m2;
    // m1.display();
    m2.display();
}