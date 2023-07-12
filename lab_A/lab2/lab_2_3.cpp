#include<iostream>
namespace BEI{
    char sub[20]=" electronic\n";
    int room=401;
    void printsubject()
    {
        std::cout<<sub;
    }
    void printRoom(){
        std::cout<<room;
    }
}
namespace BCT{
    char sub[10]=" TOC";
    int labroom=402;
    void printsubject(){
        std::cout<<sub;
    }
    void printLabroom(){
        std::cout<<labroom;
    }
}
int main()
{
    using namespace BEI;
    using namespace BCT;
    printRoom();
    BEI::printsubject();
    printLabroom();
    BCT::printsubject();
    return 0;
}