#include<stdio.h>

int main()
{
    char ch = 'A';
    char *p = &ch;
    char **q = &p;
     char *y = &ch;
    char **x = &p;

   
    printf("%d\n",&ch);
    printf("%d\n",p);
    printf("%d\n",&p);
     printf("%d\n",&q);
     printf("%d\n",q);
      printf("%c\n",**x);
       printf("%c\n",**q);
     printf("%d\n",*q);
}
