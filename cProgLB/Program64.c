#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[],int iSize)
{
    int iSum=0,iCnt=0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0,iRet = 0;

    printf("Enter the elements : \n");
    for(int iCnt = 0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Enter the elements : \n");
    for(int iCnt = 0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    
    iRet = Summation(Arr,5);   //Summation(100,5)  100 means address
    printf("Addition of all elements is : %d\n",iRet);
    return 0;
}