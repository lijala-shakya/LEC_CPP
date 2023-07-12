#include<iostream>
using namespace std;
class time
{
    private:
    int hrs;
    int min;
    int sec;

    public:
    time()
    {
         hrs=12;
         min=0;
         sec=0;
    }
    time(int s){
        hrs=s/3600;
        min=(s% 3600)/60;
        sec=(s%3600)% 60;
    }
    time(time &x)
    {
        hrs=x.hrs;
        min=x.min;
        sec=x.sec;
    }
    void display()
    {
        cout<<"Time:"<<hrs<<"hrs,"<<min<<"min,"<<sec<<"sec"<<endl;
    }
};
int main()
{
    time t1(),t2(100);
    time t3=t2;
    t1.displaytime();
    t2.dislpaytime();
    t3.displaytime();
    return 0;
}

