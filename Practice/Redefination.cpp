#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {cout<<"Inside Base Fun\n"; }

        void gun()
        {cout<<"Inside Base Gun\n"; }

        void sun()
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

        void run()          //defination
        {cout<<"Inside Derived Run\n"; }
};  //16 bytes

int main()
{
    Base *bp = NULL;
    
    bp = new Derived();     // UpCasting

    bp -> fun();        //Base Fun
    bp -> gun();        //Base Gun
    bp -> sun();        //Base Sun
   // bp -> run();        //Error

    return 0;
}