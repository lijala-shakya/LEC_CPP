#include<iostream>
using namespace std;
class binary
{
    int a,b;
    public:
    binary ()
    {
      int a=0;
      int b=0;
    }
    binary (int x,int y)
    {
        a=x;


        
        b=y;
    }
    binary operator +(binary bin)
    {
      binary temp;;
      cout<<"value of temp a:"<<temp.a<<endl;;
      cout<<"value of temp b:"<<temp.b<<endl;
      cout<<"value of a:"<<a<<endl;
      cout<<"value of b:"<<b<<endl;
      cout<<"value of bin.a"<<bin.a<<endl;
      cout<<"value of bin.b:"<<bin.b<<endl;
      temp.a=a+bin.a;
      temp.b=b+bin.b;
      return temp;
    }
    void display()
    {
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
    }
};
int main()
{
   binary b1,b2,b3;
   b1=binary(10,20);
   b2=binary(20,30);
   b3=b1+b2;
   
   b3.display();
      return 0;
}

//inheritance sure qsn
//operator overloading
//type of inheritance any 3 wih eg
//difference between acccess specifiers:private pubic protected
// iiustrate feature of oop with eg
// diff between pop and opp
//define constructor along with types
   //special type of member func
   //invoked on creation of obj
//matrix mltipication operator overloading or prefix and postfix
//unirary operator 0arg as non memb func 1 arg
//binary member 1 arg binary non member 2 args
//explain with eg implementation of friend class and friend func
//pass by reference





// /order of constructor invocation