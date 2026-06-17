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
        //Parametrised COnstructor with default argument
        ArrayX(int x = 5)                    
        {

            iSize = x;                  
            Arr = new int[iSize];       
        }

        ~ArrayX()
        {
            delete []Arr;             
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt  =0;

            cout<<"Array Elements are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;;
            }
        }
};

int main()
{   
    ArrayX *aobj = NULL;
    int iLength = 0;

    cout<<"Enter the Number of Elements : \n";
    cin>>iLength;

    aobj = new ArrayX[iLength];

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}