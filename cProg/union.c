#include<stdio.h>

union Hello
{
    int i;
    float f;
    double d;
};
struct Demo
{
    int i;
    float f;
    double d;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;
    printf("size of structure is : %d\n",sizeof(dobj));
    printf("size of union is %d \n",sizeof(hobj));

    return 0;
}