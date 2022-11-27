#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength = 10)
        {
            cout<<"\nInside construcor";
            iSize = iLength;
            Arr = new int [iSize];
        }
        ~Array()
        {
            cout<<"\nInside Destructor\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"\nEnter the value \n";
            int i=0;
            for(i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"\nElements of array are :\n";
            int i=0;
            for(i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int iSummation()
        {
            int iSum=0,i=0;
            for(i=0;i<iSize;i++)
            {
                iSum=iSum+Arr[i];
            }
            return iSum;
        }
};
int main()
{
    int iRet = 0;

    cout<<"\nInside Main";
    Array obj1(4);

    obj1.Accept();
    obj1.Display();

    iRet = obj1.iSummation();

    cout<<"\nAddition of all array elements : "<<iRet;
    return 0;
}