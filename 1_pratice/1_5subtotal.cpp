#include<iostream>
using namespace std;
int main(){
    
    string sub[]={"OOP", "TOC", "EM", "EDC", "ECT"};
    int marks[5];
    int i, total=0;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter marks for 5 sbjects"<<sub[i];
        cin>>marks[i];
    }
    for (i=0;i<5;i++)
    {
        total+= marks[i];
    }
    cout<<"the total is:"<<total;
    
    

};