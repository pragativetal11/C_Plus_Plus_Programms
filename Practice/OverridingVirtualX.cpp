#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()      //1000
        {cout<<"Inside Base Fun\n"; }

        virtual void gun()      //2000
        {cout<<"Inside Base Gun\n"; }

        virtual void sun()      //3000
        {cout<<"Inside Base Sun\n"; }
};  //8 bytes

class Derived : public Base
{
    public:
        int x,y;

        void fun()      //4000       
        {cout<<"Inside Derived Fun\n"; }

        void sun()          //5000        
        {cout<<"Inside Derived Sun\n"; }

        virtual void run()      //6000    
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