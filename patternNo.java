/*
1 
2 4
3 6  9
4 8  12 16
5 10 15
6 12
7
*/
class patternNo
{
    public static void main(String arg[])
    {
        int i,j,temp = 1;
        for(i=1;i<5;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print((temp*j));
            }
            System.out.println();
            temp++;
        }
        for(i=3;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(temp*j);
            }
            System.out.println();
            temp++;
        }
    }
}