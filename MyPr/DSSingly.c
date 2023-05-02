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

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));
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

    PNODE newn = (PNODE)malloc(sizeof(PNODE));
    PNODE temp = *First;

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


void Display(PNODE First)
{
    printf("\nElements in LL are :\n");
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }
    printf("|NULL|");
}
int count(PNODE First)
{
    int cnt = 0;
     while(First != NULL)
    {
        cnt++;
        First = First->next;
    }
    return cnt;  
}

void InsertAtPosition(PPNODE First,int no , int ipos)
{
    int inodecnt = count(*First);

    if(ipos < 1 || ipos > inodecnt+1)
    {
        printf("Invalid position \n");
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else
    if(ipos == inodecnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        PNODE temp = *First;
        newn->data = no;
        newn->next = NULL;

        for(int i = 1;i < ipos-1 ;i++)
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
        *First = temp->next;
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

void DeleteAtPosition(PPNODE First,int ipos)
{
    int inodecnt = count(*First);

    if(ipos < 1 || ipos > inodecnt)
    {
        printf("Invalid position \n");
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else
    if(ipos == inodecnt)
    {
        DeleteLast(First);
    }
    else
    {
        PNODE temp1 = *First;
        PNODE temp2;
        for(int i = 1;i < ipos-1 ;i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }

}

int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);    
    InsertFirst(&Head,11);
    InsertLast(&Head,101);
    InsertLast(&Head,121);
    InsertLast(&Head,151);
    InsertAtPosition(&Head,105,5);
    Display(Head);
    DeleteAtPosition(&Head,5);
    DeleteFirst(&Head);
    DeleteLast(&Head);
    
    Display(Head);
    int ret = count(Head);
    printf("\nTotal nodes are : %d",ret);
    return 0;
}