#include<iostream>
using namespace std;
void display()
{
    static int i=1;
    i=i+5;
    cout<<"value of i is:"<<i;
}
// \\codesnipets

int main()
{
    display();
    display();
}