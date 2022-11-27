#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;


    printf("%d\n",no);
    printf("%d\n",p);
    printf("%d\n",&no);
    printf("%d\n",&p);
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(p));
    


/* basic
    printf("%d\n",no); //value of that variable
     printf("%d\n",sizeof(no)); //size of no variable i.e. 4 byte
    printf("%p\n",&no);     //address of no variable
   */
    return 0;
}