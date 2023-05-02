#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//Number is present or not
bool CountFreq(int Data[],int len,int iNo)
{
    bool bRet = false;
    for(int icnt = 0;icnt < len ; icnt++)
    {
        if(Data[icnt] == iNo)
        {
            bRet=true;
            break;
        }
    }
    return bRet;
}
int main()
{
    int ivalue = 0;
    int *ptr = NULL;
    int size = 0;
    bool bRet = false;
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

    bRet = CountFreq(ptr,size,ivalue);
    if(bRet == true)
    {
        printf("Given element is occured in the array");
    }
    else
    {
        printf("Given element isnot occured in the array");
    }
   
    free(ptr);
    return 0;
}