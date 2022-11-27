#include<stdio.h>
//here after space is not allowed.i.e. Shital Sangitkumar Patil

int main()
{
    char Name[30];

    printf("Please Enter Your full Name : \n");
    //scanf("%s",Name);
    scanf("%[^'\n']s",Name);
    printf("Your name is : %s",Name);

    return 0;

}