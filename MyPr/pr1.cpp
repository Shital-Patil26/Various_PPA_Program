#include<iostream>
using namespace std;

int countDigit(int iNo)
{
    int Digit = 0,iRet = 0;
    int iSum = 0;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        iSum = iSum + Digit;
       // iRet++;
        iNo = iNo/10;
    }
    return iSum;
   // return iRet;
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    Ans = countDigit(n); 
    //cout<<"Number of digit in given number : "<<Ans;
    cout<<"Addition of digit in given number : "<<Ans;
    return 0;
}