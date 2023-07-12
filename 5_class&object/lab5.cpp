#include <iostream>
using namespace std;
class complex 
{
    private:
    float const real=1;
    float imag;
public:
    void getnum(float x){
        imag=x;
    cout<<"imag:"<<imag<<endl;
    }
    
    void display();
};
void complex :: display(){
    cout<<"("<<real<<","<<imag<<")";
}

    int main()
    {
        complex c1;
        c1.getnum(2.1);
        cout<<"displaying complex number:"<<endl;
        c1.display();
        return 0;
    }
