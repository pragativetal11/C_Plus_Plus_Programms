/* 
    Singly Circular Linked list

    1. Display
    2.InsertFirst
    3.Count
    4.InsertLast
    5 deleteFirst
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

SinglyLL:: SinglyLL()
{
    this->first = NULL;  
    this->iCount = 0;           
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while (temp != NULL)
    {
        cout<<" | "<<temp->data<<" | -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InseetFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->iCount == 0)                             //LL is Empty
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->iCount++;                 //Important
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this -> iCount == 0)                         //LL is empty
    {
        this->first = newn;
    }
    else
    {
        temp = this -> first;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{
    
}

void SinglyLL :: DelteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}
 
int main()
{
    int iRet = 0;

    SinglyLL sobj;

    sobj.InseetFirst(51);
    sobj.InseetFirst(21);
    sobj.InseetFirst(11);
 
    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of Elements are : "<<iRet<<endl;

    return 0;
}