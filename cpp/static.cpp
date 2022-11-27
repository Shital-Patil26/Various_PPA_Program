#include<iostream>
using namespace std;

class Demo
{  
    int a;
    public:
        int i;
        int j;
        static int k;
        static int l;
        
        Demo()
        {
            i = 0;
            j = 0;
            a = 10;
        }
        Demo(int a,int b)
        {
            i = a;
            j = b;
        }
        void fun()
        {
                cout<<"Inside Fun \n"; 
                cout<<"Value of i : "<<this->i<<"\n";
                cout<<"Value of j : "<<this->j<<"\n";
                 cout<<"Value of k : "<<k<<"\n";
                cout<<"Value of k : "<<l<<"\n";
                
        }
        static void gun(Demo d)
        {
                cout<<"Inside static method Gun \n";
                cout<<"Value of k : "<<k<<"\n";
                cout<<"Value of k : "<<l<<"\n";
                cout<<"Value of private member a : "<<d.a<<"\n";
                
        }

};
 
 int Demo::k = 0;
 int Demo::l = 0;

int main()
{
    cout<<"Value of k :"<<Demo::k<<"\n";
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo::gun();
    
    cout<<"The value of i in obj1 : "<<obj1.i<<"\n";  //10
    cout<<"The value of i in obj2 : "<<obj2.i<<"\n";    //20

    cout<<"The value of j in obj1 : "<<obj1.j<<"\n";    //11
    cout<<"The value of j in obj2 : "<<obj2.j<<"\n";    //21
    
    return 0;
}