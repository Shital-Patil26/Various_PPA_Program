// Queue in DS
#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};
template <class T>
class Queue
{
    public :
        struct node<T> *First;
        int iCount;

        Queue();
        
        bool IsQueueEmpty();
        void EnQueue(T no);  //Insert
        T DeQueue();          //Delete
        void Display();
};
template <class T>
Queue<T> :: Queue()
{
    First = NULL;
    iCount = 0;
}
template <class T>
bool Queue<T> :: IsQueueEmpty()
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
template <class T>
void Queue<T> :: EnQueue(T no)      //InsertLast
{
    struct node<T> * newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    
    iCount++;

    cout<<no<<" gets Pushed in Queue Successfully \n";
}
template <class T>
T Queue<T> :: DeQueue()              //DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty.\n ";
        return (T)-1;
    }
    else
    {
        T iValue = First -> data;
        struct node<T> *temp = First;

        First = First->next;
        delete temp;
        
        iCount--;

        return iValue;
    }

}
template <class T>
void Queue<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty.\n";
    }
    else
    {
        cout<<"Elements of Queue are : \n";
        struct node<T> *temp = First;
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
    Queue <int>obj;
    
    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<"Poped element is : "<<iRet<<"\n";

     iRet = obj.DeQueue();
    cout<<"Poped element is : "<<iRet<<"\n";

    obj.Display();

     Queue <char>cobj;
    
    cobj.EnQueue('A');
    cobj.EnQueue('B');
    cobj.EnQueue('C');
    cobj.EnQueue('D');

    cobj.Display();

    char cRet = cobj.DeQueue();
    cout<<"Poped element is : "<<cRet<<"\n";

     cRet = cobj.DeQueue();
    cout<<"Poped element is : "<<cRet<<"\n";

    cobj.Display();
    
    return 0;
}