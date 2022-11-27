#include<stdio.h>
//here after space is not allowed.i.e. Shital Sangitkumar Patil

int strlenX(char str[])
{
    int iCnt = 0,i = 0;
    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;

}
int main()
{
    char Arr[30];
    int iRet = 0;


    printf("Please Enter String: \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    
    printf("Number of characters are : %d\n",iRet);

    return 0;

}