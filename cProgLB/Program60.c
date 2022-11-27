//Check Number is pallindrome or not Using for loop
//i/p 121  o/p number is pallindrome{131,12121,etc}
//i/p 123 not Pallindrome number

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    for(;iNo != 0;)         
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    return (iRev == iTemp);
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("\n%d is a Pallindrome number. ",iValue);
    }
    else
    {
        printf("\n %d is not a Pallindrome number",iValue);
    }
    return 0;
}