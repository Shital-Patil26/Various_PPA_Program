#include<iostream>
using namespace std;

template<class T>

T Addi(T i,T j)
{
    T ans;
    ans = i + j;
    return ans;
}

int main()
{
    int a = 10,b = 11,iret = 0;
    float x = 90.1f,y = 67.0f,fret = 0.0f;
    double p = 90.1,q = 67.0,dret = 0.0;

    iret = Addi(a,b);
    fret = Addi(x,y);
    dret = Addi(p,q);
    
    cout<<"Addition of integers :"<<iret<<"\n";
    cout<<"Addition of floats :"<<fret<<"\n";
    cout<<"Addition of double :"<<dret<<"\n";
    return 0;
}
