#include<iostream>
using namespace std;
class array
{
    int arr[10],size;
    public:

        array()
        {
            cout<<"Enter size of array : ";
            cin>>size;
        }
        void get()
        {
             cout<<"Enter "<<size<<" elements in the array \n";
             for(int i = 0;i<size;i++)
             {
                cin>>arr[i];
             }
        }
        void put()
        {
             cout<<"\nArray elements are :  \n";
             for(int i = 0;i<size;i++)
            {
                cout<<arr[i]<<"\t";
            } 
        }
        int Add()
        {
            int iSum = 0;

             for(int i = 0;i<size;i++)
            {
                iSum = iSum + arr[i];
            } 
           return iSum; 

        }

};

int main()
{
    int iAns = 0;
   array a;
   a.get();
   a.put();

    iAns = a.Add();
    cout<<"\nSummation of all elements in the array : "<<iAns;
    return 0;
}