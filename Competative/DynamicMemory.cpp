#include<iostream>
using namespace std;

#include<stdlib.h>

int main()
{
    int Size = 0;

    float *Marks = NULL;

    int i =0;           //Loop Counter

    cout<<"Enter Number of Elements: \n";
    cin>>Size;

    //Dynamic Memory Allocation
    Marks = new float[Size]; 

    cout<<"Enter your Marks : \n";

    //Iteration
    //    1    2    3
    for(i = 0; i < Size; i++)
    {
        cin>>Marks[i];     //4(Pointer can be internally treated as an array)
    }

    printf("Entered Marks are: \n");

    //Iteration
    //    1    2    3
    for(i = 0; i < Size; i++)
    {
         cout<<Marks[i]<<"\n";     //4
    }
    
    delete [] Marks;

    return 0;
}