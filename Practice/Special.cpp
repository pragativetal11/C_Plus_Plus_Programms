#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
         float f;

         Demo()         //COnstructor
         {
            cout<<"Inside Constructor\n";
            i=0;
            f=0.0f;
         }

         ~Demo()        //Destructor
         {
            cout<<"Inside Destructor\n";
         }

         void fun()
         {
            cout<<"Inside fun\n";
         }
};

int main()
{
    cout<<"Inside Main\n";

    Demo dobj;      //object Creation

    cout<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of Main\n";
   
    return 0;
}