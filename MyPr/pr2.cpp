#include<iostream>
using namespace std;

int countEvenDigit(int iNo)
{
    int Digit = 0,iRet = 0;
    int iSum = 0;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        if((Digit%2) == 0)
        {
            iRet++;
        }
        iNo = iNo/10;
    }
     return iRet;
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    Ans = countEvenDigit(n); 
    cout<<"Number of Even digit in given number : "<<Ans;
 
    return 0;
}