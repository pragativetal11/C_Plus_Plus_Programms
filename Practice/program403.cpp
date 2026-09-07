/* 
    Singly linear Linked list

    function declaration and defination
*/

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
    //Function Declaration
        SinglyLL();
        void Display();
        int Count();
        void InseetFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DelteLast();
        void DeleteAtPos(int iPos);
};

//Function Defination

SinglyLL:: SinglyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;  
    this->iCount = 0;           
}

void SinglyLL :: Display()
{

}

int SinglyLL :: Count()
{
    return this->iCount;
}

//Return_value class_name :: Function_name(parameters)
void SinglyLL :: InseetFirst(int iNo)
{}

void SinglyLL :: InsertLast(int iNo)
{}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DelteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}
 
int main()
{
    SinglyLL sobj;
 
    
    return 0;
}