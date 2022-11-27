#include<stdio.h>

int main()
    {
        int Arr[4][4]={{10,20},{50,60,70,80},{90,100,110}};
        printf("%d\n",sizeof(Arr[0]));      
        
        printf("%d\t",Arr[0][1]);
       printf("%d\n",Arr[0][0]);
        printf("%d\t",Arr[2][2]);
         printf("%d\t",Arr[1][1]);
         printf("%d\t",Arr[1][3]);
         printf("%d\n",Arr[1][2]);
         printf("%d\n",Arr[2][1]);
    return 0;
    }