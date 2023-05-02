import java.util.*;

class MarvellousX
{
    /* using flag
    public boolean countFrequency(String s,char ch)
    {
        int cnt = 0;
        boolean bRet = false;

        for(int i = 0;i<s.length();i++)
        {
            if(s.charAt(i) == ch)
            {
                bRet = true;
                break;
            }
        }
        return bRet;
    }
  */
     public boolean countFrequency2(String s,char ch)
    {
        int cnt = 0, i = 0;
        //boolean bRet = false;

        for(i = 0;i<s.length();i++)
        {
            if(s.charAt(i) == ch)
            {
                break;
            }
        }
        if(i == s.length())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    
}
class strpr3
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();
        
        System.out.println("Enter character for Search: ");

        char ch = s.next().charAt(0);

        MarvellousX mobj = new MarvellousX();

        boolean n = mobj.countFrequency2(str,ch);
        if(n == true)
        {
            System.out.println("character is present");
        }
        else
        {
             System.out.println("character isnot present");
        }
    }
}