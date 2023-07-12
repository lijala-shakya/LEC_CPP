#include<iostream>
using namespace std;
class A
{
    public:
    int data;

    void getdata()
    {
    cout<<"Enter the value of a:"<<endl;
    cin>>data;
    }
    void showdata()
    {
    cout<<"The value of data is :"<<data<<endl;
    }
};
class B
{
   public:
   A a;
   int b;
   void getdata()
   {
    a.getdata();
    cout<<"Enter the value of B: "<<endl;
    cin>>b;
   }
   void showdata()
   {
     a.showdata();
     cout<<"value of B is:"<<b;
     

   }

};
int main()
{
 B bb;
 bb.getdata();
 bb.showdata();

 return 0;
 
}


