//copy one string to another string by converting capital

#include<stdio.h>

void strcpyCapX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' & *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }   
        src++;
        dest++;
    }
    *dest = '\0'; 
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter String \n");
    scanf("%[^'\n']s",Arr);
    
    strcpyCapX(Arr,Brr);   //strcpyX(100,200);

    printf("Copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    return 0;
}