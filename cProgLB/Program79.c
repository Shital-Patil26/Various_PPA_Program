//accept array of n numbers and i another number and 
//index of given number at first and if not found then return -1 
// i/p 11,31,11,11,21  o/p 3
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckOccurance(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {

            break;
        }
    }
     if(iCnt == iSize)       //new Logic
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
        
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0,iValue = 0;
    int iRet = 0;
    

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
printf("\nEnter the element to findout the occurence:");
scanf("%d",&iValue);
    // Step 4 : Call the function
      iRet = CheckOccurance(ptr, iLength, iValue);
     if(iRet == -1)
     {
        printf("There is no %d occured in the array \n",iValue);
     }
     else
     {
        printf("%d is occured in the array at index position %d \n",iValue,iRet);
     }
    // Step 6 : Deallocate the memory

    free(ptr);

    return 0;
}
//if no elements found then icnt is equal ti iSize else if found then break 