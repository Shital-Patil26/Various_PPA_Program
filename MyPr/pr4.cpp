#include<iostream>
using namespace std;
//Reverse number
int Reverse(int iNo)
{
    int Digit = 0,iRev = 0;
   
    while(iNo > 0)
    {
        Digit = iNo % 10;
        iRev = (iRev*10) + Digit;
        iNo = iNo/10;
    }
     return iRev;
}
int main()
{
    int n = 0;
    int Ans = 0;
    cout<<"Enter number : ";
    cin>>n;

    Ans = Reverse(n); 
    cout<<"Reverse Number of given number : "<<Ans;
 
    return 0;
}