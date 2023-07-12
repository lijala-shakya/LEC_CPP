#include<iostream>
using namespace std;

class sample{
    friend float mean(sample s1);
    private:
    float num1,num2;
    public:
    void getdata()
    {
        float x,y;
        cout<<"input data:"<<endl;
        cin>>x>>y;
        num1=x;
        num2=y;
    }
};
float mean(sample s1)
{
    float m;
    m=(s1.num1+s1.num2)/2;
    return m;
}

int main()
{
    sample s1;
    s1.getdata();
    cout<<"mean:"<<mean(s1)<<endl;
}