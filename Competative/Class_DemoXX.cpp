#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
         float f;

         void fun()
         {
            cout<<"Inside fun\n";
         }
};

int main()
{
    Demo dobj;

    cout<<dobj.i<<"\n";
    dobj.fun();

    return 0;
}