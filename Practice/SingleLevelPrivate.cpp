#include <iostream>
using namespace std;

class Base
{
    private:
        int i,j;

    public:
        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void gun()
        {
            cout<<"inside gun of derived\n";
        }

};

int main()
{
    cout<<"Inside Main\n";

    Derived dobj;       //local variable

    cout<<"size of Base class object is: "<<sizeof(Base)<<"\n";   //8
    cout<<"size of drived class object is: "<<sizeof(Derived)<<"\n";    //12

    //cout<<dobj.i<<"\n";     //error
    //cout<<dobj.j<<"\n";     //error
    cout<<dobj.x<<"\n";     //0


    cout<<"End of main\n";

    return 0;
}
