#include<iostream>
using namespace std;
int addFunc(int a , int b){
   return a + b;
}
double addFunc(double a , double b){
    return a + b;
}
int main(){
    int Num1=addFunc(7,6);
    double Num2=addFunc(11.11,22.22);
    cout<<"THe integer number is:"<<Num1<<endl;
    cout<<"THe double number is:"<<Num2<<endl;

    
    return(0);
};