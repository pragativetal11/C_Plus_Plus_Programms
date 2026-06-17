#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    
    public:
        Demo()
        {
            i = 0;
            j = 0;
            k = 0;
        }

    void Display()
    {
        cout<<"value i: "<<i<<"\n";     //allowed
        cout<<"value j: "<<j<<"\n";     //allowed
        cout<<"value k: "<<k<<"\n";     //allowed
    }
};

int main()
{
    Demo dobj;

    dobj.Display();

    cout<<"value i: "<<dobj.i<<"\n";    //allowed
    cout<<"value j: "<<dobj.j<<"\n";    //Not allowed
    cout<<"value k: "<<dobj.k<<"\n";    //Not allowed

    return 0;
}