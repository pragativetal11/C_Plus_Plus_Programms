#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    
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

    delete []Brr;

    return 0;
}