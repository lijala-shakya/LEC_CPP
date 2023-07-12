#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor"<<endl;
    }
    ~base()
    {
        cout<<"base destructor"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"derived constructor"<<endl;
    }
    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }
};
int main()
{
    derived b1;
    
   return 0;
}

//pg308-327 all programs