//Accept string from user and ocurence in it
#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20],cValue = '\0';
    bool bRet = false;

    printf("Please Enter string \n");
    scanf("%[^\'\n']s",Arr);

    printf("Please enter the character for search :\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

    if(bRet == true)
    {
        printf("Character is present in the string");
    }
    else
    {
        printf("Character isnot present int the string");

    }
    return 0;
}
