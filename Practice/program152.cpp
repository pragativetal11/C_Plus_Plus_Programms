//Summation od Array elements(partial OOP)

#include<iostream>
using namespace std;

class ArrayX
{ 
    public:

    int Summation(int Arr[], int iSize)
    {
        int iCnt =0, iSum = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
};

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    ArrayX aobj;
    
    cout<<"Enter Number of Elemnts : \n";
    cin>>iLength;

    //c : (int *)malloc(sizeof(int) * iLength)
    //java : Brr= new int[];

    Brr = new int[iLength];

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the array : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet = aobj.Summation(Brr, iLength);
    cout<<"Summation is : "<<iRet<<endl;

    delete []Brr;

    return 0;
}