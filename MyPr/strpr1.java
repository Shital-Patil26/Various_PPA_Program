import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int cnt = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i) <='z')
            {
                cnt++;
            }
        }
        return cnt;
    }
}
class strpr1
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();

        MarvellousX mobj = new MarvellousX();

        int n = mobj.SmallCount(str);

        System.out.println("Small Count :"+n);
    }
}