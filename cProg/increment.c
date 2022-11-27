#include<stdio.h>

int main()
{
    int no = 10;
    int x = 0;
    x = no++;
    int y=0;
    y= ++no;
    printf("The post increment value %d \n",x);
    printf("The valueof no  %d \n",no);
    printf("The pre increment value %d \n",y);
    printf("The post increment value %d \n",no);


    return 0;
}