#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
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