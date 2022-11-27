import java.util.*;
class ExceptionDemoSolution
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0,iNo2 = 0, iAns = 0;

        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number");
        iNo2 = sobj.nextInt();
        try
        {
        iAns = iNo1 / iNo2;
        }
        catch(ArithmaticException obj)
        {
            System.out.println("Inside catch 1");
            System.out.println(obj);
        }
        catch(NullPointerException obj)
        {
            System.out.println("Inside catch 1");
            System.out.println(obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch 1");
            System.out.println(obj);
        }
        finally
        {
            
            System.out.println("Inside finally block");
            sobj.close();
        }
        System.out.println("Division is :"+iAns);
    }
}