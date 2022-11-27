#include<stdio.h>

#pragma pack(5) //memory allocates in terms of 1 bit
struct Demo
{
    int i;          //4
    float f;        //4 
    char c;         //1
   float d;       // 4
};                //13

int main()
{
    struct Demo dobj;
    printf("Size of structure is : %d \n",sizeof(dobj));
    return 0;
}