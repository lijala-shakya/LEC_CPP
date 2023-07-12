#include<iostream>
using namespace std;
class parent
{
  
  public:
  virtual void print()
  {
    cout<<"this is parent class"<<endl;
  }
 
}; 
class child:public parent
{
    
   public:
   void print()
   {
    parent::print();
    cout<<"this is child class"<<endl;
   }
};
int main()
{
    parent p1,p2;
    child c1 ;
    parent *ptr=&c1;
    ptr->print();
    
    
    
   
   return 0;
}



// virtual class
//constructor invocation order