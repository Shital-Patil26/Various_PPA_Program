#include<iostream>
using namespace std;
//call by value
void fun(int no)
{
    cout<<"Inside call by value : "<<no<<"\n";
    no++;
}
//call by address
void gun(int *p)
{
     cout<<"Inside call by address : "<<*p<<"\n";
    (*p)++;
}
//call by reference
void sun(int &ref)
{
     cout<<"Inside call by Reference : "<<ref<<"\n";
     ref++;
}
int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);     //fun(10);
    cout<<"\n Inside main :"<<i;
    gun(&j);    //gun(200);
    cout<<"\n Inside main :"<<j;
    sun(k);     //sun(k);
    cout<<"\n Inside main :"<<k;

    return 0;
}