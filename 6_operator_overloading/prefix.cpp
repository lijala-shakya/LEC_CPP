#include<iostream>
using namespace std;
class prefix
{
    int i=9;
    public:
    void operator++()
    {++i;}
    void display()
    {
        cout<<" prefix is:"<<i<<endl;
    }
};
int main()
{
    prefix a;
    ++a;
    a.display();

   return 0;
}