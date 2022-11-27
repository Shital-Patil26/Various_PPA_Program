//Write a program the number to divide three and five .
#include<stdio.h>
#include<stdbool.h>


bool DivisibleByThreeAndFive(int iNo)
{
    int iAns1=0,iAns2=0;
    iAns1 = iNo % 3;
    iAns2 = iNo % 5;
    //if((iNo % 3 == 0) && (iNo % 5 == 0))
    if((iAns1 == 0) && (iAns2 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number   : \n");
    scanf("%d",&iValue);
     
    bRet=DivisibleByThreeAndFive(iValue);
    if(bRet == true)
    {
        printf("The number is divisible by 3 And 5");
    }
    else
    {
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}