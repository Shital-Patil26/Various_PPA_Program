//check armstrong number 153 = 1^3+5^3+3^3 = 153

class armstrong
{
    public static void main(String arg[])
    {
        int iNo = 152;
        int i,iDigit,iSum = 0;
      
        for(i=iNo;i!=0;i=i/10)
        {
            iDigit = i%10;
         iSum = iSum + (iDigit*iDigit*iDigit);   
        }
        if(iSum == iNo)
        {
            System.out.println(iNo+" is armstrong number ");
        }
        else
        {
            System.out.println(iNo+ " is not armstrong number");
        }
    }
}
