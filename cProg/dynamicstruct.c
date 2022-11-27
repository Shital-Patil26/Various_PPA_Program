#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int i;
    float f;
};
int main()
{
    struct Demo obj;
    
    obj.i=11;
    obj.f=21.1;

    struct Demo *ptr;
    ptr=(struct Demo *)malloc(sizeof(*ptr));

    ptr->i = 41;
    ptr->f = 31.0;

    printf("static memory allocation: int %d \n",obj.i);
    printf("\tfloat %f ",obj.f);
    printf("\n Dynamic memory allocation int %d \n",ptr->i);
    printf("\t float %f ",ptr->f);

    free(ptr);

}