#include<iostream>
using namespace std;

void countEvenOddDigit(int iNo)
{
    int Digit = 0,iEvenCount = 0;
    int iOddCount = 0;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        if((Digit%2) == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
        iNo = iNo/10;
    }
    
    cout<<"\nNumber of Even digit in given number : "<<iEvenCount;
    cout<<"\nNumber of Odd  digit in given number : "<<iOddCount;
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    countEvenOddDigit(n); 
 
 
    return 0;
}