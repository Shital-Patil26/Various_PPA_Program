#include<stdio.h>
//here after space is not allowed.i.e. Shital Sangitkumar Patil
int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{
    char Name[30];
    int iRet = 0;


    printf("Please Enter String: \n");
    scanf("%[^'\n']s",Name);

    iRet = strlenX(Name);
    
    printf("Number of characters are : %d\n",iRet);

    return 0;

}