#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;

    p=(int *)malloc(10 * sizeof(int));
 
    //use the memory

    p = (int *)realloc(p, 15 * sizeof(int));

    //use the memory

    free(p);

    return 0;
}