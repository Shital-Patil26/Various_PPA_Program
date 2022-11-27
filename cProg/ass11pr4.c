#include<stdio.h>

int gun(int x,char y)
{
    
    printf("Value of X:%d",x);
    printf("Value of Y:%c",y);
    return 0;
}
int main()
{
    void (*fptr)();
    fptr = gun;
    int a = 10;
    int i;
    char b = 'p';
    i = fptr(a,b);
    return 0;
}
