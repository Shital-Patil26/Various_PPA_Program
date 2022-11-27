// i/p 18
// o/p  2 6 
//time complexity n/2
//write a program for to display even factor 
#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= (iNo/2); iCnt++ )
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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