#include<iostream>
using namespace std;

void test(){
    static int var = 0;
    var=var+5;

    cout<<"The variables are: "<<var<<endl;
}

int main()
{
    test();
    test();

    return 0;
}