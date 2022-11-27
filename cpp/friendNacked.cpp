#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
        friend void fun();
};
void fun()  //Naked function
{
    Demo obj;
    cout<<"\nValue of i : "<<obj.i;
    cout<<"\nValue of j : "<<obj.j;
    cout<<"\nValue of k : "<<obj.k;
}
int main()
{
    fun();
    return 0;
}