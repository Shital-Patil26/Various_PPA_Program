#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;

    Demo(int x = 10,int y =20)
    {
        i = x;
        j = y;
    }
    void fun()
    {
        i++;
        j++;
    }
    void gun() const //Increments are Not Allowed in constant behaviour 
    {
        i++;
        j++;
    }
};
int main()
{
    Demo obj1;
    Demo obj2(31);
    Demo obj3(11,21);
    obj3.fun();
    obj3.gun();

    return 0;
}