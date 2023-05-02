import java.util.*;
//Toggle String 
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
                int ascii = s.charAt(i);
                ascii = ascii + 32;
                System.out.print((char)ascii);  
            }
        }
        //return s;
    }
}
class strpr5
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