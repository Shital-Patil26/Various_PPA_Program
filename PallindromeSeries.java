//Pallindrome series
//prime series

class PallindromeSeries
{
    public static void main(String arg[])
    {
        int first = 1;
        int last = 100;
        int i,j,flag = 0;
        for(i=first;i<=last;i++)
        {
            flag = 0;
            int iDigit = 0,iRev = 0; 
           // int temp = i;
            for(j=i;j!=0;j=j/10)
            {
                iDigit = j %10;
                iRev = (iRev*10)+iDigit;
            }
            if(i == iRev)
            {
                System.out.print(i+" ");
            }
        }
    }
}
