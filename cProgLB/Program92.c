#include<stdio.h>

//i/p 4 o/p A   B  C  D

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
       // ch++;
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