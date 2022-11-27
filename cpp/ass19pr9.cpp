#include<iostream>
using namespace std;

class Demo
{
     static int k;
    public:
        int i,j;
       
    Demo()
    {
        i=10;
        j=20;
        cout<<"inside constructor\n";
    }
    void fun()
    {
        cout<<"Base Fun\n";   
        cout<<"k:  =>"<<k;
        cout<<"i=="<<i;
    }
    static void gun()
    {
        cout<<"k:  =>"<<k;
        //cout<<"i=="<<i;
    }
};
int Demo::k=11;
int main()
{
    Demo dobj;
    dobj.fun();
    Demo::gun();
    return 0;
}