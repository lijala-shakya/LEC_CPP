#include<iostream>
using namespace std;
class parent
{
    protected:
    int id_protected;
};
class child: public parent
{
 public:
 void setid(int id)
 {
    id_protected=id;
 }
 void display()
 {
    cout<<"id_protected is:"<<id_protected<<endl;

 }
};
int main()
{
    child c1;
    c1.setid(4);
    c1.display();
   return 0;
}