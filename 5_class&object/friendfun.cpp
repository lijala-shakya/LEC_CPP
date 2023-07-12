#include<iostream>
using namespace std;
class friends
{
    private:
    char phone[10];
    char address[30];

    public:
    friends()
    {
       
        cout<<"Their phone numbers is:"<<endl;
        cin>>phone;
        cout<<"Their address is:"<<endl;
        cin>>address;
    }
    void info()
    {
        cout<<"phone"<<phone<<endl;
        cout<<"address"<<address<<endl;
    }

};
int main()
{
    friends ram,shyam,hari;

    cout<<"ram:"<<endl;
    ram.info();

    cout<<"shyam:"<<endl;
    shyam.info();

    cout<<"hari:"<<endl;
    hari.info();

}