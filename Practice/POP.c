#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans=0;
    Ans = No1+No2;
    return Ans;
}

int Substraction(int No1, int No2)
{
    int Ans=0;
    Ans = No1-No2;
    return Ans;
}

int main()
{
    int A= 11, B=10;
    int Result=0;

    Result= Addition(A,B);
    printf("Additon is: %d\n",Result);

    Result = Substraction(A,B);
    printf("Substraction is: %d\n",Result);

    return 0;
}