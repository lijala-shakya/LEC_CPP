#include<iostream>
using namespace std;

class base{
    
};

class derived:public base{
    public:
        derived(){
            cout<<"default constructor from derived class";
        }
};

int main(){
    derived d;
    return 0;
}