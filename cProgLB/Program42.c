// i/p 18
// o/p  2 6 
//write a program for to display even factor 
//Time complexity n/4
#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt <= (iNo/2); iCnt=iCnt+2 )   //iCnt+=2
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue;
    printf("Enter Number \n ");
    scanf("%d",&iValue);
    DisplayEvenFactors(iValue);
}