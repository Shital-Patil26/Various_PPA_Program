//write a program to Sum the digit
//I/P :751
//O/P :13

// I/P :7515
//o/p :18

//I/p :7
//o/p :7


#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)  //Updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Summation of Digits are : %d\n",iRet);

    return 0;
}