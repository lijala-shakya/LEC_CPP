#include<iostream>
using namespace std;
class helloworld
{
    public:
    helloworld()
    {
        cout<<"constructor is called"<<endl;

    }
    ~helloworld()
    {
        cout<<"destructor is called"<<endl;
    }
    void display()
    {
        cout<<"hello world";
    }
    //difference between constructor and destructor with examples
    //pg 177/178 code
};
int main()
{
    helloworld obj;
    obj.display();
    return 0;
}