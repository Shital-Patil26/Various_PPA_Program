#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE First,int No)
{
    //step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    //step 2:Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List are \n");
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL");
}
int main()
{
   PNODE Head = NULL;
    
   insertFirst(&Head,51);
   insertFirst(&Head,21);
   insertFirst(&Head,11);
   
   Display(Head);

    return 0;
}