#include<stdio.h>

void DisplayReverse(int iNo)
{
    printf("-----------------------------------------------------------------\n");
    int iCnt = 0;
    iCnt = iNo;
    
    while(iCnt >= 1 )
    {
        printf("%d\t",iCnt);
        iCnt--;
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