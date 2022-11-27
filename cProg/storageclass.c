#include<stdio.h>

int A = 10;

void Fun()
{
    auto int B = 20;
    register int D = 20;
    static int E = 20;
   
    B++;
    D++;
    E++;

    printf("Value of auto variable : %d\n",B);
    printf("Value of register variale : %d\n,D");
    printf("Value of static variable : %d\n",E);

}

int main()
{
    int C = 30;
    printf("first function call");
    Fun(); 
    printf("Second function call");
    Fun();
     printf("Third function call");
     Fun();
    return 0;
}