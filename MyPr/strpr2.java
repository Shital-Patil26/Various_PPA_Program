import java.util.*;

class MarvellousX
{
    public int countFrequency(String s,char ch)
    {
        int cnt = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s.charAt(i) == ch)
            {
                cnt++;
            }
        }
        return cnt;
    }
}
class strpr2
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();
        
        System.out.println("Enter character for Search: ");

        char ch = s.next().charAt(0);

        MarvellousX mobj = new MarvellousX();

        int n = mobj.countFrequency(str,ch);

        System.out.println("Small Count :"+n);
    }
}