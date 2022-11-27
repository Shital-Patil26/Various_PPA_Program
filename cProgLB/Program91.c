#include<stdio.h>

//i/p 4 
//o/p 1     *     2    *     3     *    4      *

void Display(int iNo)       //2N
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);          //Dynamic Variable (not change)
    }
     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");                 //static (fixed data)
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