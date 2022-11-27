//write a program to count the even digit
//I/P :751
//O/P :0

// I/P :264
//o/p :3

//I/p :706
//o/p :2


#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iEvenCnt = 0;
    int iDigit = 0;

    if(iNo < 0)  //Updater
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if((iDigit % 2) == 0 )
       {
        iEvenCnt++;
       }
        iNo = iNo / 10;
        
    }
    return iEvenCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);
    printf("Number of Digits are : %d\n",iRet);

    return 0;
}