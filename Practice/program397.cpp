/* 
    Singly linear Linked list

    Memory allocation of node
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

int main()
{
    PNODE newn = NULL;
    
    //newn = (PNODE)malloc(sizeof(NODE));
    newn = new NODE;                        //memory allocation

    newn -> data = 11;
    newn -> next = NULL;

    cout<<newn -> data<<endl;

    //free(newn);
    delete newn;                        //memory deallocation

    return 0;
}