#include<iostream>
using namespace std;
//Min Digit
int MinDigit(int iNo)
{
    int Digit = 0,iRet = 0;
    int iMin = 9;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        if(Digit < iMin)
        {
            iMin = Digit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo/10;
    }
    return iMin;
   
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    Ans = MinDigit(n); 
    
    cout<<"Minimum digit of given number : "<<Ans;
    return 0;
}