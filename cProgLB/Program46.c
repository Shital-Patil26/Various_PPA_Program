//write a program to count the digit
//I/P :751
//O/P :3

// I/P :7515
//o/p :4

//I/p :7
//o/p :1


#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of Digits are : %d\n",iRet);

    return 0;
}