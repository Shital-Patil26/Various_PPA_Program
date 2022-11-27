#include<stdio.h>

//i/p 4 o/p *   *   *   * 
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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