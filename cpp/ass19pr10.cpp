#include<iostream>
using namespace std;
int fun(const int a,const int b)
{
  
    return a+b;
}
int gun(int a,int b)
{
      a++;
    return a+b;
}
int main()
{
    cout<<"\nAddition of constant "<<fun(10,10);
    cout<<"\nAddition of non constant "<<gun(10,10);
    return 0;
}