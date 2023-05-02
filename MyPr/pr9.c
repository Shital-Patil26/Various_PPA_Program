#include<stdio.h>
#include<stdlib.h>

float average(int arr[],int len)
{
    float fRet= 0.0;
    int iSum = 0;

    for(int i = 0;i<len;i++)
    {
        iSum = iSum + arr[i];
    }

    printf("Addition %d",iSum);
    fRet = iSum/len;
    return fRet;
}
int main()
{
    int size,i=0;
    int *ptr = NULL;
    float avg= 0.0;

    printf("Enter size of array : ");
    scanf("%d",&size);
    ptr = (int *)malloc(size * sizeof(int));
    printf("Enter elements in the array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    avg = average(ptr,size);
    printf("\nAverage of array is: %f",avg);
    free(ptr);
    return 0;

}