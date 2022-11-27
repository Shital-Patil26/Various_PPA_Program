#include<stdio.h>

int a = 10;

extern int b;
extern int c;

int main()
{  
    printf("Value of a:%d\n",a);
    printf("Value of b from other file is : %d\n",b);
    printf("Value of c form other file is : %d\n",c);
  
    return 0;
}
