#include<stdio.h>
#include<stdlib.h>

int CountEven(int Data[],int len)
{
    int iEven = 0;
    for(int icnt = 0;icnt < len ; icnt++)
    {
        if(Data[icnt]%2 == 0)
        {
            iEven++;
        }
    }
    return iEven;
}
int main()
{
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
    iRet = CountEven(ptr,size);
    printf("\nNumber of Even Element in Array are :  %d",iRet);
    
    free(ptr);
    return 0;
}