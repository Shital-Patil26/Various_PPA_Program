#include<stdio.h>
int a=11;
int b=10;
extern int add(int a, int b);
int main()
{
 
    int c=0;
    c=add(a,b);
    printf("\nAddition of two number is : %d",c);
    return 0;
}