#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int Add(int No1, int No2)
        {
            cout<<"Addition is :"<<No1+No2<<"\n";
        }

        virtual int Sub(int No1, int No2) = 0;
};

class Derived : public Base
{
    public:
        int x,y;

    int Mult(int No1, int No2)
    {
        cout<<"Multiplication is :"<<No1*No2<<"\n";
    }

    int Sub(int No1, int No2)
    {
        cout<<"Substraction is :"<<No1-No2<<"\n";
    }
};

int main()
{
    Base *bp = new Derived();

    bp -> Add(11,10);
    bp -> Sub(11,10);
    //bp -> Mult(11,10);

    return 0;
}
