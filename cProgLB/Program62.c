//write a program to accept a number and get  maximum digit from that number
//For time complexity
#include<stdio.h>
int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}
//751

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);
    printf("Maximum digit of given number : %d\n",iRet);

    return 0;
}