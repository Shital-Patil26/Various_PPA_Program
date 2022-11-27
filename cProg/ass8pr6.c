#include<stdio.h>

/*assignment 8 problem no 6
auto int no=10;
void gun()
{
    register float fvalue=20.3;
    printf("value  f=%f",fvalue);
}
int main()
{
    printf("Inside main");
    gun();
    return 0;

}
*/
//assignment 8 problem 7
int fun()
{
    auto int i = 10;
    register int j = 20;
    int ret = 0;
    ret = i + j;
    return ret;

}
int main()
{
    int i;
    printf("Inside main");
    i=fun();
    printf("i=%d",i);
    return 0;
}