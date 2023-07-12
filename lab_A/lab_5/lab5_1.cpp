#include<iostream>
using namespace std;
class constcl
{
    private:
    const int constdata;
    public:
    constcl():constdata(0){}
    constcl(int num):constdata(num){}
    void display();
    int retval();
};
void constcl::display()
{
    cout<< constdata<<endl;
}
int constcl::retval()
{
    return constdata;
}
int main()
{
    constcl c1(3), c2;
    cout<<"value of c1 is:";
    c1.display();
    cout<<"\n value of c2 is:";
    c2.retval();
   return 0;
}