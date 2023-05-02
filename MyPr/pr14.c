#include<stdio.h>
#include<stdlib.h>

//To print Reverse of given array
void Reverse(int Data[],int len)
{
    printf("\nReverse array :");
    
    for(int icnt = len-1;icnt >= 0 ; icnt--)
    {
       printf("%d\t",Data[icnt]);
    }

}
int main()
{
    int ivalue = 0;
    int *ptr = NULL;
    int size = 0;

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
   
    Reverse(ptr,size);
       
    free(ptr);
    return 0;
}