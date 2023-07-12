#include<iostream>
#define PI 3.142
using namespace std;

int calculatearea(int a, int b){
   return a * b;
}
double calculatearea(int r){
    return PI*r*r;
}

int main()
{
    int rectangle=calculatearea(5,2);
    double circle=calculatearea(3);
    int shape;
    cout<<"Area to be calculated of:"<<endl;
    cin>>shape;
    switch(shape)
    {
    case 1:
    cout<<"area of rectangle is :"<<rectangle;
    break;

    case 2:
    cout<<"area of circle is:"<<circle;
    break;
    }
    
    
    return(0);
};


