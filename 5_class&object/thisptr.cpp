#include<iostream>
using namespace std;
class A
{
    private:
  int x;

  public:
  void getnum(int x)
  {
    this->x=x;
  }
  
  void shownum()
  {
    cout<<x;
  }
  
};

int main()
{
    A obj1,obj2;
    obj1.getnum(52);
    obj1.shownum();

}