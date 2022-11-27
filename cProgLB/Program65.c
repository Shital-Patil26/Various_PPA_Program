//For dynamic allocation
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iSum = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int Arr[5];
    int iCnt = 0,iRet = 0,iLength;

    printf("Enter no of elements you want to store\n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength+sizeof(int));

    printf("Enter the elements : \n");
    for(int iCnt = 0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter the elements : \n");
    for(int iCnt = 0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet = Summation(ptr,iLength);   //Summation(100,5)  100 means address
    printf("Addition of all elements is : %d\n",iRet);
   
    free(ptr);  
    return 0;6
}