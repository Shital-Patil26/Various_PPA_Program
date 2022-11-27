//accept array of n numbers and add even elements and odd elements  and print it

#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOddSum(int Arr[], int iSize)
{
    int iCnt = 0,iSumEven = 0,iSumOdd = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    //or odd count :%d", iSize-iEvenCnt not use any other counter
    printf("\nSum of Even elements are  :%d",iSumEven);
    printf("\nSum of Odd elements are :%d",iSumOdd);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOddSum(ptr, iLength);
    
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}