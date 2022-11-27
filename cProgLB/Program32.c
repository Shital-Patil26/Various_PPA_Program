//write a program to find the factors for time complexity

//Time complexity  
//O(N/2)
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors are : \n");
    for(iCnt=1 ; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        
    }

    

}
int main()
{
    int iValue=0;

    printf("Enter Number for Factors : ");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    
    return 0;
}