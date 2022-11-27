//Accept string from user and ocurence in it
#include<stdio.h>
#include<stdbool.h>

bool CountFrequency(char *str,char ch)
{
    int iCnt = 0;
    bool bflag = false;
    while(*str != '\0')
    {
        if(*str == *ch)
        {
            bflag == true;
            break;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20],cValue = '\0';
    bool bRet = false;
    printf("Please Enter string \n");
    scanf("%[^\'\n']s",Arr);

    printf("Please enter the character for search :\n");
    scanf(" %c",&cValue);

    bRet = Checky(Arr,&cValue);
    printf("Frequency of letter is : %d\n",iRet);
    if(bRet == true)
    {
        printf("Character is present");
    }
    else
    {

    }
    return 0;
}
