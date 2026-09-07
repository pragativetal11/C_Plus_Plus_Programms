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

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;             
        }
};

int main()
{
    SinglyLL sobj;              //Size of object is 8 bytes

    return 0;
}