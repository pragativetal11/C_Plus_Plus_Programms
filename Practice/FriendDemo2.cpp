#include<iostream>
using namespace std;

class Demo
{
    public: int i;
    private:int j;
    protected: int k;

    public:
        Demo()
        {
            i = 11;
            j = 21;
            k = 51;
        }

        //does not required anr access specifier we can write anywhere
        friend void fun();      //Friend function declaration  
};

void fun()
{
    Demo dobj;
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;
}

int main()
{
    fun();

    return 0;
}