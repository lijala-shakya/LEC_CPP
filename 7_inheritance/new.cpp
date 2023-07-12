#include<iostream>
using namespace std;
class base
{
    public:
    int id;
};

class derived : public base {
    public:
    void setId(int n) {
        id = n;
    }
};

int main()
{
    derived d1;
    d1.id = 10;
    d1.setId(10);
   return 0;
}