////////////////////////////////////////////////////
//  Steps to follow while programming
/////////////////////////////////////////////////////


//Step 1 Understand the problem stement
//Step 2 Write the algorithm
//Step 3 Decide the Programming Language
//Step 4 write the program
//step 5 Test the program
/////////////////////////////////////////////////////////
//Problem Statement :Accept Number from user and check 
//whether it is Divisible by 5 or not 
////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//      Algorithm
//////////////////////////////////////////////////////////////////

/*
    START
    Accept the number from user as No
    Divide that No by 5 and check the value of remainder
    If the value is 0
        Then display as No is divisible by 5
    Otherwise
        display as No is not divisible by 5 

    END
*/
#include<stdio.h>
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    if(iAns == 0)
    {
        return 1;   
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number   : \n");
    scanf("%d",&iValue);
    iRet=DivisibleByFive(iValue);
    if(iRet == 1)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number isnot divisible by 5");
    }
    return 0;
}