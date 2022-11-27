#include<iostream>
using namespace std;
class Base
{
    public:                 //Access Specifier
    int A,B;
    void fun()            //Function Defination         //1000
    {
        cout<<"Base Fun\n";
    }
    void gun(int i)    //Function Defination        2000
    {
        cout<<"Base gun with 1 integer\n";
    }
    void gun(int i,int j)       //Overloaded function defination        3000
    {
        cout<<"Base gun with 2 integer\n";
    }
};
class Derived : public Base
{
    public :
            int X,Y;
            void sun()        //Function Defination         4000
            {
                cout<<"Derived Sun\n";
            }
            void fun()           //Function redefination        5000
            {
                cout<<"Derived fun\n";
            }
};
int main()
{
    Derived dobj;
    dobj.Base::fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();


    return 0;
}
