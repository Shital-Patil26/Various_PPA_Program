#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

////////////////////////////////////////////////////////////////
// Structure for Doubly Linear and doubly Circular
template <class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;
};

////////////////////////////////////////////////////////////////

// Class of Singly Linear Linked List

template <class T>
class SinglyLL
{
    public:

        struct nodeS<T> * First;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

};

////////////////////////////////////////////////////////////////

// Class of Singly Circular Linked List

template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;
        struct nodeS<T> * Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};


////////////////////////////////////////////////////////////////

// Class of Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;
        int iCount;

        DoublyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;
        struct nodeD<T> * Last;

        DoublyCL();
        
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

//       Functions for Singly Linked List 

////////////////////////////////////////////////////////////////
template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
   struct nodeS<T> * newn = new nodeS<T>;
    
    newn->data = no;
    newn->next = NULL;
    
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}
template <class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct nodeS<T> * newn = new nodeS<T>;
    newn->data = no;
    newn->next =  NULL;

    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
     
    }
    else    // If LL contains atleast one node
    {
      
        struct nodeS<T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;  
    }
}
template <class T>
void SinglyLL<T> :: InsertAtPosition(T no, int ipos)
{
    int iCount = Count();
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount +1)
    {
        InsertLast(no);
    }
    else
    {
        struct nodeS<T> * newn = new nodeS<T>;
       
        newn->data = no;
        newn->next = NULL;

        struct nodeS<T> * temp = First;
        for(int iCnt = 1;iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}
template <class T>
void SinglyLL<T> :: DeleteFirst()
{
    int iCount = Count();
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> * temp = First;
        First = First -> next;
        delete temp;
        iCount--;
    }
}
template <class T>
void SinglyLL<T> :: DeleteLast()
{    
    int iCount = Count();
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> * temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

        iCount--;
    }
}
template <class T>
void SinglyLL<T> :: DeleteAtPosition(int ipos)
{
    int iCount = Count();
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount +1)
    {
        DeleteLast();
    }
    else
    {
        struct nodeS<T> * temp1 = First;
        for(int iCnt = 1;iCnt < ipos-1; iCnt++)
        {
            temp1 =temp1->next;
        }
        struct nodeS<T> * temp2 = temp1->next;
        
        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct nodeS<T> * temp = First;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL <T> :: Count()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;
    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////

//          Functions of Singly Circular LL   

/////////////////////////////////////////////////////////

template <class T>
SinglyCL<T> :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T no)
{
    struct nodeS<T> * newn = new nodeS<T>;        //PNODE newn = (PNODE)malloc(sizeof(NODE)); 
 
    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

template <class T>
void SinglyCL<T> :: InsertLast(T no)
{
    struct nodeS<T> * newn = new nodeS<T>;      // PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}
template <class T>
void SinglyCL<T> :: Display()
{
      struct nodeS<T> * temp = First;

    cout<<"Elements of Linked list are :" <<"\n";
    
    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }while(temp != Last->next);
    cout<<"\n";
}
template <class T>
int SinglyCL<T> :: Count()
{
    struct nodeS<T> * temp = First;
    
    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    struct nodeS<T> * temp = First;

    if((First == NULL) && (Last == NULL))    //Empty LL
    {
        return;
    }
    else if(First == Last)  // OR *First == First  //Single LL
    {
        //free(First);
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    //if LL contains more than one node
    {
        First = (First)->next;
        //free(temp);
        delete temp;


        (Last)->next = First;
    }
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    struct nodeS<T> * temp = First;
    if((First == NULL) && (Last == NULL))    //Empty LL
    {
        return;
    }
    else if(First == Last)   //Single LL
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    //if LL contains more than one node
    {
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        //free(temp->next);    // free(*Last);
        delete temp->next;
        Last = temp;
        (Last)->next = First;
    }
}
template <class T>
void SinglyCL<T> :: InsertAtPosition(T no,int iPos)
{
    struct nodeS<T> * temp = First;
    struct nodeS<T> * newn = NULL;
    int iCnt = 0,iNodeCnt = 0;
    iNodeCnt = Count();

    if((iPos < 1)|| (iPos > iNodeCnt+1))
    {
        cout<<"Invalid Position \n";
        return;
    }  

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        //newn = (PNODE)malloc(sizeof(NODE));
        newn = new nodeS<T>;
        newn->data = no;
        newn->next = NULL;
        for(iCnt = 1; iCnt <iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
template <class T>
void SinglyCL<T> :: DeleteAtPosition(int iPos)
{
   struct nodeS<T> * temp1 = First;
   struct nodeS<T> * temp2;
    
    int iCnt =0,iNodeCnt = 0;
    iNodeCnt = Count();

    if((iPos < 1) || (iPos > iNodeCnt))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }   
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    { 
        for(iCnt = 1; iCnt <iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
       // free(temp2); 
       delete temp2;      
    }
}
///////////////////////////////////////////////////////
//   Functions of Doubly Linked List
//////////////////////////////////////////////////

template <class T>
DoublyLL<T> :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
    // Step1 : Allocate memory for node

    struct nodeD<T> * newn = new nodeD<T>;
   // Step2 : Initialise node

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

     // Step3 : Check if LL is empty or not
    if(First == NULL)    // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
        iCount++;
    }
}
template <class T>
void DoublyLL<T> :: InsertLast(T no)
{
    // Step1 : Allocate memory for node
    struct nodeD<T> * newn = new nodeD<T>;
   // Step2 : Initialise node

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

     // Step3 : Check if LL is empty or not
    if(First == NULL)    // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else
    {
        struct nodeD<T> * temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}
template <class T>
void DoublyLL<T> :: InsertAtPosition(T no,int iPos)
{
    if(iPos < 1 || iPos >iCount+1)
    {
        cout<<"\nInvalid Position ...\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
        iCount++;
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
        iCount++;
    }
    else
    {
        struct nodeD<T> * newn = new nodeD<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        struct nodeD<T> * temp = First;

        int iCnt = 0;
        for(iCnt = 1;iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        newn->next =  temp->next;
        temp->next->prev = newn;    //X
        temp->next = newn;
        newn->prev = temp;          //y
        iCount++;
    }
}
template <class T>
void DoublyLL<T> :: DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"\nLL is Empty \n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeD<T> * temp = First;
        First = First->next;
        First->prev = NULL;
        delete temp;
        iCount--;
    }
}
template <class T>
void DoublyLL<T> :: DeleteLast()
{
    if(First == NULL)
    {
        cout<<"\nLL is Empty \n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeD<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
         delete temp->next;
        iCount--;
    }
}
template <class T>
void DoublyLL<T> :: DeleteAtPosition(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
       struct nodeD<T> * temp1 = First;
       struct nodeD<T> * temp2 = NULL;
        for(int iCnt = 1;iCnt < iPos-1 ; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;  //temp1->next = temp1->next->next;
        temp2->next->prev =temp1;
        delete temp2;
        iCount--;
    }
}
template <class T>
void DoublyLL<T> :: Display()
{
      struct nodeD<T> * temp = First;
    cout<<"\nElements of Linked List are \n";
     cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |=>";
        temp = temp->next;
    }    
    cout<<"NULL";
}
//////////////////////////////////////////////////////////
//Functions of Doubly Circular LL
//////////////////////////////////////////////////////////
template <class T>
DoublyCL<T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}
template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct nodeD<T> * newn = new nodeD<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else    //if LL contains 1 or more  nodes
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}
template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
    struct nodeD<T> * newn = new nodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else    //if LL contains 1 or more  nodes
    {
        (Last) -> next = newn;
        newn->prev = Last;
        Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}
template <class T>
void DoublyCL<T> :: Display()
{ 
    struct nodeD<T> * temp = First; 

    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }
    cout<<"Elements in Linked List are : \n";

    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    int iCnt = 0;
   struct nodeD<T> * temp = First;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;

}
template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL)) //Empty LL
    {
        return;
    }
    else if(First == Last)        //Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        //more than one node
    {
        First = (First) -> next;
        delete (Last)->next;       //free((*First)->prev);    
        
        (First)->prev = Last;
        (Last)->next = First;
    }
   
}
template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if((First == NULL) && (Last == NULL)) //Empty LL
    {
        return;
    }
    else if(First == Last)        //Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        //more than one node
    {
        Last = (Last)->prev;
        delete (First)->prev;     //free((*Last)->next);
        (First)->prev = Last;
        (Last)->next = First;
    }
}
template <class T>
void DoublyCL<T> :: InsertAtPos(T no,int ipos)
{
    int iNodeCnt = Count();
    int iCnt = 0;
    struct nodeD<T> * newn = NULL;
    struct nodeD<T> * temp = NULL;
    if((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new nodeD<T>;
        newn->data = no;
        newn->prev = NULL;
        newn->next = NULL;

        temp = First;
        for(iCnt = 1;iCnt < ipos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    int iCnt = 0;
    struct nodeD<T> * temp = NULL;

    if((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1;iCnt < ipos-1;iCnt++)
        {
            temp = temp->next;
        }
    
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

int main()
{

    
    return 0;
}
