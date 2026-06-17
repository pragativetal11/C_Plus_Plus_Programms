//OOP syntax

#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX()       
        {

            iSize = 5;                  
            Arr = new int[iSize];       
        }

        ArrayX(int x)       
        {

            iSize = x;                  
            Arr = new int[iSize];       
        }

        ~ArrayX()
        {
            delete []Arr;             
        }
};

int main()
{   
    ArrayX *aobj1 = new ArrayX();           //Default COnstructor
    ArrayX *aobj2 = new ArrayX(5);          //Parametrized Constructor
    
    //Function Call

    delete aobj1;
    delete aobj2;

    return 0;
}