import java.util.*;

class MarvellousX
{
    public void Convertcap(String s)
    {
        int cnt = 0;
        char chUpper;
        for(int i = 0;i<s.length();i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i) <='z')
            {
                int ascii = s.charAt(i);
                ascii = ascii - 32;
                chUpper = (char)ascii;
                System.out.print(chUpper);  
            }
            else
            {
                System.out.print(s.charAt(i));  
            }
        }
        //return s;
    }
}
class strpr4
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();

        MarvellousX mobj = new MarvellousX();

       //System.out.println("converted string"+);
       mobj.Convertcap(str);

    
    }
}