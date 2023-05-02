#include<iostream>

using namespace std;
//check whether given number is pallindrome or not

bool pallindrome(int iNo)
{
    int Digit = 0,iRev = 0;
    int Value=iNo;
    while(iNo > 0)
    {
        Digit = iNo % 10;
        iRev = (iRev*10) + Digit;
        iNo = iNo/10;
    }
    if(iRev == Value)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n = 0;
    bool Ans = false;
    cout<<"Enter number : ";
    cin>>n;

    Ans = pallindrome(n); 
    if(Ans == true)
    {
        cout<<"Given number is pallindrome";
    }
    else
    {
        cout<<"Given number isnot pallindrome";
    }
   
 
    return 0;
}