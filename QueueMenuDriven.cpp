// Queue in DS
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class Queue
{
    public :
        struct node *First;
        int iCount;

        Queue();
        
        bool IsQueueEmpty();
        void EnQueue(int no);  //Insert
        int DeQueue();          //Delete
        void Display();
};
Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}
bool Queue :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
void Queue :: EnQueue(int no)      //InsertLast
{
    struct node * newn = new node;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node * temp = First;
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    
    iCount++;

    cout<<no<<" gets Pushed in Queue Successfully \n";
}
int Queue:: DeQueue()              //DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty.\n ";
        return -1;
    }
    else
    {
        int iValue = First -> data;
        struct node *temp = First;

        First = First->next;
        delete temp;
        
        iCount--;

        return iValue;
    }

}
void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty.\n";
    }
    else
    {
        cout<<"Elements of Queue are : \n";
        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |->";
            temp = temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}


int main()
{
     Queue obj;
    int iChoice = 0,iRet = 0,iNo = 0;
    while(1)
    {
        cout<<"\nEnter 1 For Insert : \n";
        cout<<"\nEnter 2 for Delete : \n";
        cout<<"\nEnter 3 For Display : \n";
        cout<<"\nEnter 4 for Terminating :\n";
        cin>>iChoice;
        switch(iChoice)
        {
            case 1: cout<<"Enter number for Enqueue : ";
                    cin>>iNo;
                    obj.EnQueue(iNo);                    
                    break;
            case 2: iRet = obj.DeQueue();    
                    cout<<"Deleted Element is "<<iRet<<"\n";
                    break;
            case 3: obj.Display();
                    break;
            case 4: printf("\nThank you for using this application ");
                    return 0;
            default : printf("\nInvalid Position ");
                            break;
        }
    }
           // iRet = obj.Pop();    
             //       cout<<"Poped Element is "<<iRet<<"\n";
    return 0;
}