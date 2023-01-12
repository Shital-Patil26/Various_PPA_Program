//Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;           //4
    struct node *next;      //8
    struct node *prev;      //X      8 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; 
        *First = newn;
    }
    
} 
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
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
        newn->prev = temp;
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List are \n");
     printf("NULL<=>");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
   int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE First)
{
   if(*First == NULL)   //LL is Empty
    {
        return;

    }
    else if((*First)->next == NULL)         //LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else        //LL contains more than 1 node
    {
        *First = (*First)->next;
        free((*First)->prev);       //X
        (*First)->prev = NULL;      //X
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

   if(*First == NULL)   //LL is Empty
    {
        return;

    }
    else if((*First)->next == NULL)         //LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else        //LL contains more than 1 node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}
void InsertAtPos(PPNODE First,int no,int ipos)
{
    int NodeCnt = 0; 
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);
    
    if(( ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf(" Invalid position\n ");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *First;

        int iCnt = 0;
        for(iCnt = 1;iCnt < ipos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        newn->next =  temp->next;
        temp->next->prev = newn;    //X
        temp->next = newn;
        newn->prev = temp;          //y
    }
}
void DeleteAtPos(PPNODE First,int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0; 
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    NodeCnt = Count(*First);
    
    if(( ipos < 1) || (ipos > (NodeCnt)))
    {
        printf(" Invalid position\n ");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;
      
        for(iCnt = 1;iCnt < ipos-1 ; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;  //temp1->next = temp1->next->next;
        temp2->next->prev =temp1;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0,iChoice = 0,iNo = 0,iPos = 0;
    while(1)
    {
        printf("\n--------------------------------------------\n");
        printf("\nPlease Enter the dersired option : \n");
        printf("\nEnter 1 for Insert element at First Position : ");
        printf("\nEnter 2 for Insert element at Last Position: ");
        printf("\nEnter 3 for Insert element at Given Position : ");
        printf("\nEnter 4 for Delete element at First Position : ");
        printf("\nEnter 5 for Delete element at Last Position : ");
        printf("\nEnter 6 for Delete element at Given Position : ");
        printf("\nEnter 7 for Display the content of Linked List : ");
        printf("\nEnter 8 for Count number of nodes from Linked List: ");
        printf("\nEnter 9 for Terminating the application ");
        scanf("%d",&iChoice);
        switch(iChoice)
        {
            case 1 : printf("Enter number for insert at First : \n");
                scanf("%d",&iNo);
                InsertFirst(&Head,iNo);
                break;
            case 2 : printf("Enter number for insert at Last : \n");
                scanf("%d",&iNo);
                InsertLast(&Head,iNo);
                break;
            case 3 : printf("\nEnter number that you want to insert at given position : ");
                    scanf("%d",&iNo);
                    printf("\nEnter Position : ");
                    scanf("%d",&iPos);
                    InsertAtPos(&Head,iNo,iPos);
                    break;
            case 4 :DeleteFirst(&Head);
                    break;
            case 5 : DeleteLast(&Head);
                    break;
            case 6 : printf("\nEnter Position which data you want to delete : ");
                    scanf("%d",&iPos);
                    DeleteAtPos(&Head,iPos);
                    break;
            case 7 : Display(Head);
                     break;
            case 8 : iRet = Count(Head);   
                    printf("\nThere are %d elements in LL ",iRet);
                    break;
            case 9: printf("\nThank you for using this application ");
                    return 0;
            default : printf("\nInvalid Position ");
                            break;
        }
       printf("\n-----------------------------------------------\n"); 
    }
    return 0;
}