#include <iostream>
using namespace std;

class Student{
    public:
    double marks;
    Student(double m){
        marks=m;
    }
};


void calculateAverage(Student s1, Student s2)
{
    double average = (s1.marks + s2.marks)/2;
    cout<<"The average marks of two student is"<<average<<endl;
}

int main(){
    Student student1(100.21), student2(200.50);
    calculateAverage(student1, student2);
    return 0;
}