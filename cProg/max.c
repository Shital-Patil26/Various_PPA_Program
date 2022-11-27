#include<stdio.h>
int Maximum(int a,int b)
{
    int max = 0;
    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}
int main()
{
    int x,y;
    int m = 0;
    printf("Enter First number\n");
    scanf("%d",&x);
     printf("Enter Second number\n");
    scanf("%d",&y);
    m = Maximum(x,y);
    printf("Maximum of two number is %d",m);
    return 0;
}