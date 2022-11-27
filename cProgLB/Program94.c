#include<stdio.h>

//i/p 4 o/p *   *   *   * 
void Display(int iRow, int iCol)    //N^2(n*n)
{
    int i = 0,j = 0;
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iCol; j++ )
        {
                  printf("*\t");
        }
       printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("\nEnter number of rows :");
    scanf("%d",&iValue1);

      printf("\nEnter number of columns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}