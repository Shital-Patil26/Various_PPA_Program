 #include<stdio.h>

int A=10;
extern int B;
extern int C;
int main()
{
    A++;
    printf("Value of A is :%d\n",A);
    printf("Value of B from other file is:%d\n",B);
    printf("Value of B from other file is:%d\n",C);
    return 0;
}
//gcc first1.c sec.c -o myexe   for compile
//myexe       for run