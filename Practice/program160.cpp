//padding

#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int x)       
        {
            cout<<"Inside Constructor\n";

            iSize = x;                  //Characteristics Initialization
            Arr = new int[iSize];       //Resource allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;               //Resource Deallocation
        }
};

int main()
{
    //Static memory allocation for object
   //ArrayX aobj1(5);        
    ArrayX *aobj1 = new ArrayX(5);
    
    delete aobj1;

    cout<<"End of main()\n";
    return 0;
}