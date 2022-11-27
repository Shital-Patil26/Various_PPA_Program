//write a program to find the factors for given number and addition of it


#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    //iNo/2 for optimization
    for(iCnt=1 ; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt; 
        }  
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet = 0;
    
    printf("Enter Number for Factors : ");
    scanf("%d",&iValue);
    
    iRet = SumFactors(iValue);
    printf("Addition of that factors are : %d ",iRet);
    
    return 0;
}