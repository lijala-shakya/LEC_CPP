#include<iostream>
using namespace std;
class student
{
    public:
    float marks;
    student(double m){
        marks=m;
    }
};
void calculateaverage(student s1,student s2)
{
    double average =  (s1.marks + s2.marks)/2;
    cout <<"The average marks of student is:"<<average;
}

int main()
{
    student s1(102.35),s2(202.65);
    calculateaverage( s1, s2);    
    return 0;
}
