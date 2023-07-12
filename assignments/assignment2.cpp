#include<iostream>
using namespace std;
class books
{ private:
   float rate;
   string name;
   string author;
   int bookno;

   public:
   books(float r,int bn,string n)
   {
     rate=r;
     bookno=bn;
     name=n;
   }
   books()
   {
      cout<<"genre is suspence and thriller";
   }
   void setdata()
   {
      cout<<"the name of author is Holly Jackson"<<endl;
   
   }
   void getdata();
};
void books::getdata()
{
   cout<<"name of the book:"<<name<<endl;
   cout<<"rate of the book:"<<rate<<endl;
   cout<<"book number:"<<bookno<<endl;
}

int main()
{
   books  b1(570.07 , 2324,"As Good As Dead"),b2;
   b1.getdata();
   b1.setdata();
   
   b2.setdata();

}