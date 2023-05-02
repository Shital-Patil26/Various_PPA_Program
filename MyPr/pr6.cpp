#include<iostream>
using namespace std;
//Max Digit
int MaxDigit(int iNo)
{
    int Digit = 0,iRet = 0;
    int iMax = 0;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        if(Digit > iMax)
        {
            iMax = Digit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo/10;
    }
    return iMax;
   
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    Ans = MaxDigit(n); 
    
    cout<<"Maximum digit of given number : "<<Ans;
    return 0;
}