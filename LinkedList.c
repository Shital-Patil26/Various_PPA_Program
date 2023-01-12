#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node  NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
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
    printf("Elements in Linked List are : \n");
    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First= First->next;
    }
    printf(" NULL ");
}
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
   
    PNODE temp = *First;
   
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    Display(Head);
     InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    Display(Head);

    return 0;
}