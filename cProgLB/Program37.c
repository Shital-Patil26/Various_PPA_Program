//Write a program to display non factors of number

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
  
    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue;
    int iAdd=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    iAdd = SumNonFactors(iValue);
    printf("Addition of Non factors is : %d",iAdd);
    return 0;
}