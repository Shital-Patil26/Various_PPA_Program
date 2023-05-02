#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

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

void InsertLast(PPNODE First,int no)
{
    PNODE temp = *First;

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
  
    if(*First == NULL)
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
void InsertAtPosition(PPNODE First,int no,int ipos)
{
    int nodecnt = Count(First);
    if(ipos < 1 || ipos > nodecnt+1)
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == nodecnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        PNODE temp = *First;
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for(int i = 1;i<ipos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
     if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        (*First) = (*First)->next;
        free(temp);
    }
    
}
void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
     if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}


void Display(PNODE First)
{
    printf("Elements in LL are : \n");
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }
    printf("|NULL|");
}
int Count(PNODE First)
{
    int cnt = 0;
    while(First != NULL)
    {
        cnt++;
        First = First->next;
    }
    return cnt;
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);  
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    DeleteFirst(&Head);
    DeleteLast(&Head);
      
    Display(Head);

    return 0;
}