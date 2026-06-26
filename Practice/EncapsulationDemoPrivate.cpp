#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access SPecifier(By edefault private)
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

    cout<<mobj1.No1<<"\n";          //Error

    mobj1.fun();                    //Error
    mobj2.fun();                    //Error

    mobj1.gun();                    //Error
    mobj2.gun();                    //Error
    
    return 0;
}