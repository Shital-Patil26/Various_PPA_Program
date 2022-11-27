#include<stdio.h>
struct demo
{
    int no;
    float f;
};

int main()
{
    struct demo arr[3];

    arr[0].no=11;
    arr[0].f=10.9;

     arr[1].no=21;
    arr[1].f=90.9;
    
     arr[2].no=51;
    arr[2].f=50.9;
    printf("size of whole array : %d\n",sizeof(arr));
    printf("size of structure : %d\n",sizeof(struct demo));
    printf("value of first structure element is %d \n",arr[0].no);

    return 0;
}