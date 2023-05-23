#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the required number"<<endl;
    cin>> number;
    if (number<9){
        if(number>0){
            cout<<"number is positive"<<endl;
        }
        else{
            cout<<"number is negative";
        }
    }
    else{
        cout<<"Not a natural number";
    };
    return(0);
};