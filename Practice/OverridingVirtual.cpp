#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {cout<<"Inside Base Fun\n"; }

        virtual void gun()
        {cout<<"Inside Base Gun\n"; }

        virtual void sun()
        {cout<<"Inside Base Sun\n"; }
};  //8 bytes

class Derived : public Base
{
    public:
        int x,y;

        void fun()          //Redefination
        {cout<<"Inside Derived Fun\n"; }

        void sun()          //Redefination
        {cout<<"Inside Derived Sun\n"; }

        virtual void run()          //defination
        {cout<<"Inside Derived Run\n"; }
};  //16 bytes

int main()
{
    Base *bp = new Derived();       //Up casting

    bp -> fun();    //Base Fun
    bp -> gun();    //Base Gun
    bp -> sun();    //Derived Sun
   // bp -> run();    //Error
    
    return 0;
}