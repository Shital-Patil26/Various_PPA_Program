#include<stdio.h>

int main()
{
    int iToken = 0;
    printf("Enter your token number:\n");
    scanf("%d",&iToken);
    switch(iToken)
    {
        case 11: 
            printf("Mulichi chapple milali \n");
            break;
        case 21:
            printf("Mulachi chapple milali\n ");
            break;
        case 51:
            printf("Aai chi chapple milali\n");
            break;
        case 101:
            printf("wadilanchi chapple milali\n");
            break;
        default:
             printf("this token isnot exist...\n");        
             break;    
    }
    return 0;
}