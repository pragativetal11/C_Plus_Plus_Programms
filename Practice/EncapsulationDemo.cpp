#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access SPecifier
    public:
    int No1, No2;       //characteristics

    void fun()          //Behaviour
    {
        cout<<"Inside fun\n";
    }

    void gun()          //Behaviour
    {
        cout<<"Inside gun\n";
    }

};

int main()
{
    //objec creation(Instace)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";      //8

    cout<<mobj1.No1<<"\n";

    mobj1.fun();
    mobj2.fun();

    mobj1.gun();
    mobj2.gun();
    
    return 0;
}