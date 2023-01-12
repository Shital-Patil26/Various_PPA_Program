// stack in DS
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class Stack
{
    public :
        struct node *First;
        int iCount;

        Stack();
        
        bool IsStackEmpty();
        void Push(int no);  //Insert
        int Pop();          //Delete
        void Display();
};
Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}
bool Stack :: IsStackEmpty()
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
void Stack :: Push(int no)      //InsertFirst
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
        newn->next = First;
        First = newn;
    }
    
    iCount++;

    cout<<no<<" gets Pushed in Stack Successfully \n";
}
int Stack :: Pop()              //DeleteFirst
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
void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
        cout<<"Elements of stack are : \n";
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
     Stack obj;
    int iChoice = 0,iRet = 0,iNo = 0;
    while(1)
    {
        cout<<"\nEnter 1 For Push : \n";
        cout<<"\nEnter 2 for Pop : \n";
        cout<<"\nEnter 3 For Display : \n";
        cout<<"\nEnter 4 for Terminating :\n";
        cin>>iChoice;
        switch(iChoice)
        {
            case 1: cout<<"Enter number for push : ";
                    cin>>iNo;
                    obj.Push(iNo);                    
                    break;
            case 2: iRet = obj.Pop();    
                    cout<<"Poped Element is "<<iRet<<"\n";
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