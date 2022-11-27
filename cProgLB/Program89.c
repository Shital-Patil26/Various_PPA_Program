#include<stdio.h>

//i/p 4 o/p 4   3   2   1 

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("\nEnter number :");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}