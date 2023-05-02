#include<stdio.h>
#include<stdlib.h>
int Sum(int Data[],int len)
{
    int iSum = 0;
    for(int icnt = 0;icnt < len ; icnt++)
    {
        iSum = iSum + Data[icnt];
    }
    
    return iSum;
}
int main()
{
    int Arr[10];
    int *ptr = NULL;
    int size = 0,iRet = 0;
    printf("Enter size :");
    scanf("%d",&size);

    ptr = (int *)malloc(size*sizeof(int));

    printf("Enter array element : \n");
    for(int icnt = 0;icnt <size ; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    printf("Array element are : \n ");
    for(int icnt = 0;icnt <size ; icnt++)
    {
        printf("%d\t",ptr[icnt]);
    }
    iRet = Sum(ptr,size);
    printf("Summation of Array digits are :  %d",iRet);
    
    free(ptr);
    return 0;
}