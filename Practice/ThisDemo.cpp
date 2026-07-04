#include<iostream>
using namespace std;

class Demo{
    public:
        int i,j;

        Demo(int A, int B)
        {
            i = A;
            j = B;
        }

        void Display()
        {
            cout<<i<<"\n";
            cout<<j<<"\n";
        }
};

int main()
{
    Demo dobj1(10,20);
    Demo dobj2(50,60);

    dobj1.Display();
    dobj2.Display();

    return 0;
}