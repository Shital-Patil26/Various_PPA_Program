//check armstrong number 153 = 1^3+5^3+3^3 = 153

class armstrongSeries
{
    public static void main(String arg[])
    {
        int first = 1;
        int last = 1000;
        int i,iDigit;
        for(int j = first;j<=last;j++)
        {
            int iSum = 0;
            for(i=j;i!=0;i=i/10)
             {
                 iDigit = i%10;
                iSum = iSum + (iDigit*iDigit*iDigit);   
             }
             if(j == iSum)
             {
                System.out.println(j);
             }
        }

        
    }
}
