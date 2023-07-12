#include<iostream>
using namespace std;
class wall
{
    private:
    int breadth;
    int length;
    
    public:
    wall(int a,int b)
    {
        length=a;
        breadth=b;
    }

    wall(wall &t)
    {
        length=t.length;
        breadth=t.breadth;
    }

    double calculatearea()
    {
        return length*breadth;
    }

};

int main()
{
    wall wall1(25,56);
    wall wall2 = wall1;
    cout<<"the area of the wall l1 is:"<<wall1.calculatearea()<<endl;
    // wall2 =l1;
    cout<<"the area of wall 2 is:"<<wall2.calculatearea();
}