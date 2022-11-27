#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    static int k;
    Base()
    {
        i=10;
        j=20;
        cout<<"inside constructor using this pointer fun call\n"; 
        this->fun();
    }
    void fun()
    {
        cout<<"Base Fun\n";
    }
};
int Base::k=11;

class Derived:public Base
{
    public:
        int x,y;
    Derived()
    {
        x=50;
        y=60;
    }
    void gun()
    {
        cout<<"Derived Gun\n";
    }
};
int main()
{
    Base bobj;
    Derived dobj;
    cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj)<<endl;
    cout<<bobj.i<<endl;
    cout<<bobj.j<<endl;
    cout<<dobj.i<<endl;
    cout<<bobj.k<<endl;
    cout<<dobj.k<<endl;
    cout<<dobj.x<<endl;
    //bobj.fun();
    //bobj.fun();
    dobj.gun();
    return 0;
}