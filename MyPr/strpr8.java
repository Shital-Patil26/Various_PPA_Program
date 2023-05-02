import java.util.*;
//Copy string in another string

class strpr8
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();
        String copystr;
        copystr = str;
        
        System.out.println("copied string in another string variable : "+copystr);
    }
}