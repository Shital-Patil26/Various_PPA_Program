#include<iostream>
using namespace std;

class Overloading
{
    public:
      //Add@2ii    i.e. name mangling this works internally
        int Add(int a,int b)    //1000 address in text section
        {
            cout<<"Addition of 2 integers\n";
            return a+b;

        }
        //Add@2ff
        float Add(float a,float b) //2000
        {
            cout<<"\n Addition of float\n";
            return a+b;

        }
        //Add@2dd
        double Add(double a,double b)//3000
        {
            cout<<"\n Addition of double\n";
            return a+b;
        }
        //Add@3iii
        int Add(int a,int b,int c)      //4000
        {
            cout<<"\nAddition of 3 integers \n";
            return a+b+c;
        }
        //Fun@2if    
        void Fun(int a,float b)
        {

        }
        //Fun@2fi
        void Fun(float x,int y)
        {

        }
};

int main()
{
    int i1,i2;
    float f;
    double d;
    Overloading obj;
    i1=obj.Add(11,21);   //CALL 1000
    cout<<i1;
    i2=obj.Add(11,21,51);      //CALL 4000
    cout<<i2;
    f=obj.Add(11.1f,21.2f);   //CALL 2000
    cout<<f;
    d=obj.Add(20.8,80.9);     //CALL 3000
    cout<<d;
    return 0;
}

