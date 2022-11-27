#include<iostream>
using namespace std;

class base1
{
    public:
    int x;
        base1()
        {
            cout<<"Base1 constructor\n";
        }
       ~base1()
        {
            cout<<"Base1 destructor\n";
        }
};
class base2
{
    public:
     base2()
    {
            cout<<"Base2 constructor\n";
    }
    ~base2()
        {
            cout<<"Base2 destructor\n";
        }

};

class Derived : public base1, public base2
{
    public:
     Derived()
        {
            cout<<"Derived constructor\n";
        }
    ~Derived()
        {
            cout<<"Derived destructor\n";
        }

};
int main()
{
    Derived dobj;
    
}