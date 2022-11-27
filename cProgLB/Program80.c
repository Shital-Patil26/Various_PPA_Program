//accept array of n numbers and find the largest number of array
// i/p 181,731,411,561,210  o/p 731

#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)        //5
{
    int iMax = Arr[0],iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)  //omplexity :N
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;
    printf("Enter number of elements :\n");     //1
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);     //2

    printf("\nEnter the elements : \n");     //3
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Maximum(ptr,iLength);        //4
    printf("Maximum number is : %d\n",iRet);
    free(ptr);      //6
    return 0;

}
