//write a program to accept a number and get  minimum digit from that number

#include<stdio.h>
int MinDigit(int iNo)
{
    int iDigit = 0, iMin = 9;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}
//751

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    printf("Maximum digit of given number : %d\n",iRet);

    return 0;
}