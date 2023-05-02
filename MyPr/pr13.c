#include<stdio.h>
#include<stdlib.h>

//calculate index of given number
int CountFreq(int Data[],int len,int iNo)
{
    int iRet = -1;
    for(int icnt = 0;icnt < len ; icnt++)
    {
        if(Data[icnt] == iNo)
        {
            iRet = icnt;
            break;
        }
    }
    return iRet;
}
int main()
{
    int ivalue = 0;
    int *ptr = NULL;
    int size = 0;
    int iRet = 0;
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
    printf("\nEnter Element :");
    scanf("%d",&ivalue);

    iRet = CountFreq(ptr,size,ivalue);
    if(iRet < 0)
    {
        printf("Given element isnot occured in the array");
    }
    else
    {
        printf("Given element is occured at index %d position in the array",iRet);
    }
   
    free(ptr);
    return 0;
}