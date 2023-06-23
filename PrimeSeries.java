//prime series

class PrimeSeries
{
    public static void main(String arg[])
    {
        int first = 10;
        int iNo = 50;
        int i,j,flag = 0;
        for(i=first;i<=iNo;i++)
        {
            flag = 0;
            for(j=2;j<i;j++)
            {
                if(i%j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0 && i != 1)
            {
                System.out.print(" "+i);
            }
        }
    }
}
