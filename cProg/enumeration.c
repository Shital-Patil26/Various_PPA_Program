#include<stdio.h>

enum days { Monday, tuesday, wednesday,Thursday};

int main()
{
    enum days obj;
    printf("Size of enum :%d \n",sizeof(obj));
    printf("Monday :%d \n",Monday);   \
    printf("Tuesday :%d \n",tuesday);
    printf("wednesday :%d \n",wednesday);
    printf("Thursday :%d \n",Thursday);


    return 0;
}