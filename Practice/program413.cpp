/* 
    Doubly Linear Linked list with 
    function declaration and defination

    1. Display
    2.InsertFirst
    3.Count
    4.InsertLast
    4. DeleteFirst
    5. DeleteLast
    6. InsertAtPos
*/

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
    //Function Declaration(prototype)
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DelteLast();
        void DeleteAtPos(int iPos);
};

//Function Defination

DoublyLL:: DoublyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;  
    this->iCount = 0;           
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    cout<<"NULL =>";

    while (temp != NULL)
    {
        cout<<" | "<<temp->data<<" | =>";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
    return this->iCount;
}

//Return_value class_name :: Function_name(parameters)
void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(NULL == this -> first)
    {
        this->first = newn;
    }
    else
    {
        newn -> next = first;

        first->prev = newn;

        this->first = newn;
    }
    this->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(NULL == this -> first)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn-> prev = temp;
    }
    this->iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Position is Invalid\n";
        return;
    }

    if(iPos == 1)
    {
        this -> InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;

        iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        first = first-> next;
        delete first->prev;
        first->prev = NULL;
    }
    iCount--;
}

void DoublyLL :: DelteLast()
{
    PNODE temp = NULL;

   if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        temp = this->first;

        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;

}

void DoublyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Position is Invalid\n";
        return;
    }

    if(iPos == 1)
    {
        this -> DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DelteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}
 
int main()
{
    DoublyLL dobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while (iChoice != 9)
    {
        cout<<"----------------------------------\n";
        cout<<"Enter your Choice : \n";
        cout<<"----------------------------------\n";
        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : Delete node at first position\n";
        cout<<"5 : Delete node at last position\n";
        cout<<"6 : Delete node at given position\n";
        cout<<"7 : Display the elements\n";
        cout<<"8 : Count Number of Element\n";
        cout<<"9 : Terminate the application\n";
        cout<<"----------------------------------\n";
        cin>>iChoice;

        switch (iChoice)
        {
            case 1 :
                cout<<"Enter the value :\n";
                cin>>iValue;
                dobj.InsertFirst(iValue);
                break;

            case 2 :
                cout<<"Enter the value :\n";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;

            case 3 :
                cout<<"Enter the value :\n";
                cin>>iValue;
                cout<<"Enter the Position :\n";
                cin>>iPosition;
                dobj.InsertAtPos(iValue, iPosition);
                break;

            case 4 :
                dobj.DeleteFirst();
                break;

            case 5 :
                dobj.DelteLast();
                break;
            
            case 6 :
                cout<<"Enter the position : \n";
                cin>>iPosition;
                dobj.DeleteAtPos(iPosition);
                break;

            case 7 :
                cout<<"Elements of the linked list are : \n";
                dobj.Display();
                break;

            case 8 :
                iRet = dobj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9 :
                cout<<"Thankyou for using Marvellous Infosystems Application\n";
                break;

            default :
                cout<<"Invalid Choice\n";
        }
    }

    return 0;
}