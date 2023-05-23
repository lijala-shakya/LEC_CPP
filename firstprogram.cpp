#include<iostream>
using namespace std;
class student{
    char assignment [40];
    int rollnumber;
public:

  void read(){
    cout<<"Enter rollnumber:";
    cin>>rollnumber;
  }

  void assign(){
    
    cout << "assignment submission [Y/N]" ;
    cin>>assignment;
  }
  void info(){
    cout<<"rollnumber :"<<rollnumber;
    cout << "assignment submission:" <<assignment<<endl;
  }
};

int main()
{
    student sanjina ;
    cout << "student: sanjina"<<endl;
    sanjina.read();
    sanjina.assign();
    sanjina.info();


}