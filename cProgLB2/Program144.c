//Accept string from user and ocurence in it without flag
#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    
    if(*str == '\0')
        return false;
    else
        return true;
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
        printf("Character is present");
    }
    else
    {
        printf("Character isnot present");

    }
    return 0;
}
