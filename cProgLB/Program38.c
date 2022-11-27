#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    
    printf("Table of %d\n",iNo);
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iCnt * iNo);
    } 
}
int main()
{
    int iValue;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;

}