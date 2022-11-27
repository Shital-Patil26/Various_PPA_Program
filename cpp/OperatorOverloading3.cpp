#include<iostream>
using namespace std;

class Demo
{
    private :
       int A,B;
    public:
     

        Demo(int i = 0,int j = 0)
        {
            A = i;
            B = j;
        }
    friend Demo operator +(Demo,Demo);
    void Display()
    {
        cout<<"Addition of two objects is :\n"<<A<<"\n";
        cout<<B<<"\n";
    }
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator Function\n";
    return Demo(obj1.A+obj2.A,obj1.B+obj2.B);

} 

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans(0,0);

    Ans = X + Y;
    Ans.Display();

    return 0;
}