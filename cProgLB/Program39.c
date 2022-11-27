#include<stdio.h>
void DisplayReverse(int iNo)
{
    printf("-----------------------------------------------------------------\n");
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n----------------------------------------------------------------\n");
}
int main()
{
    int iValue;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    DisplayReverse(iValue);
    return 0;
}