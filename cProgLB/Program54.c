//write a program to count the even  and Odd digit
//I/P :751
//O/P :0

// I/P :264
//o/p :3

//I/p :706
//o/p :2


#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
       /* printf("Number of even digits are: 1");        
        printf("Number of odd digits are 0");
         return;
         */
         iEvenCnt++;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if((iDigit % 2) == 0 )
       {
        iEvenCnt++;
       }
       else
       {
        iOddCnt++;
       } 
       iNo = iNo / 10;
    }
    printf("Number of even digits are:%d \n",iEvenCnt);
    printf("Number of odd digits are: %d \n",iOddCnt);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number : \n");
    scanf("%d",&iValue);

     DisplayEvenOddDigits(iValue);
    

    return 0;
}