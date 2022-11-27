#include<stdio.h>
/*
iRows = 4 
iCols = 4

&   &   &   &
*   &   &   &
*   *   &   &
*   *   *   &

*/
void Display(int iRow,int iCol)
{
    int i = 0,j = 0;
    if(iRow != iCol)
    {
        printf("Rows and columns are different\n");
        return;
    }
    for(i = 1;i <= iRow; i++)
    {
       for(j = 1;j <= iCol; j++)
        {
           if(i <= j)
           {
               printf("&\t"); 
           }
           else
            {
                printf("*\t");
            }
        }
         printf("\n");
     }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    
    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);
    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}