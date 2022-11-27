//Write a program to display non factors of number

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("Non Factors of %d are :\n",iNo);
    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf(" %d \t",iCnt);
        }
    }

}
int main()
{
    int iValue;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    DisplayNonFactors(iValue);

    return 0;
}