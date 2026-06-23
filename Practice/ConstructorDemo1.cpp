#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access SPecifier
    public:
    int No1, No2;       //characteristics

    //Default Constructor
    Marvellous()
    {
        cout<<"Inside Defalut Cobstructor\n";
        No1 = 0;
        No2 = 0;

    }

    //parametrised Constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside Parametrised Cobstructor\n";
        No1 = A;
        No2 = B;

    }

    //Cpoy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    //Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";
    Marvellous mobj1;            //Default Constructor
    Marvellous mobj2(11,21);    //Parametrised Constructor
    Marvellous mobj3(mobj2);    //Copy Constructor

    cout<<"end of Main\n";

    return 0;
}   //All Destructors gets called