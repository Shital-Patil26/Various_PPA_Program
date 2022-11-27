//Accept string from user and occurence of capital letter in it

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Please Enter string \n");
    scanf("%[^\'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Frequency of  capital letter is : %d\n",iRet);

    return 0;
}
