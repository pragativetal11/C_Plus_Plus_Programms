/* 
    Singly linear Linked list

    object creation
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
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;  
            this->iCount = 0;           
        }
};

int main()
{
    SinglyLL sobj;

    cout<<sobj.first<<endl;              //0
    cout<<sobj.iCount<<endl;             //0

    return 0;
}