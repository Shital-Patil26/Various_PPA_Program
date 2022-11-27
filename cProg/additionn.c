/*
Steps to develop the application

Steps 1: Understand the problem statement
Step 2:write the algorithm
Step 3 :Deside the programming language
Step 4 :Write the program
step 5 :Test the program

*/



//Accept N number from user and perform the addition
//Input
//Value of N=5
//Values:10 20 30 40 50

//Output 
//Addition is : 150

//Algorithm
/*
  START
  Accept the number of elements from user 
  Allocate the memory to store that numbers
  Accept the numbers from user
  Perform addition of all numbers
  Display the addition

  END
  */
#include<stdio.h>   //for printf and scanf
#include<stdlib.h>    //for malloc and free

/////////////////////////////////////////////////////////////////
//
//  Application Name :Addition of N numbers
//  Input :     N numbers
//  Output :    Addition
//  Author :    Shital Patil
//  Date   :    18 Sept 2022
//
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;    //pointer to hold the address of array
    int iSize = 0;      //Vaiable to hold size of array
    int iSum = 0;       //To hold the addition
    register int i;         //register strorage class because its frequentely used
    
    printf("Please Enter how many elements you want\n");
    scanf("%d",&iSize);

    //Allocate the memory
   
    Arr = (int *)malloc(iSize *sizeof(int));
    printf("Memory allocation is succesful\n");
    printf("Please enter the elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    //Perform the addition
      for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("\nAddition is : %d",iSum);

    free(Arr);
    printf("Memory gets Deallocated\n");
    return 0;
}