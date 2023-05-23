#include<iostream>
using namespace std;
int main(){
int day;
cout<<"enter a number between 0 and 5"<<endl;
cin>>day;
switch (day)
{
case 1:
    cout<<"Today is Tuesday";
    break;

case 2:
    cout<<"Today is Wednesday";
    break;
case 3:
    cout<<"Today is Thursday";
    break;    
case 4:
    cout<<"Today is 'Sunday'";    
    break;
} 
return(0);
}