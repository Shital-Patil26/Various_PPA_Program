import java.util.*;
class MarvellousX
{
    public int SmallCount(String s)
    {
        int countsmall = 0;
        for(int i = 0;i<s.length();i++)
        {
            if((s.charAt(i) >= 'a') &&(s.charAt(i) <= 'z'))
            {
                countsmall++;
            }
        }
        return countsmall;
    }
}
class pr20
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        MarvellousX mobj = new MarvellousX();

        int count = mobj.SmallCount(str);
        System.out.println("Small Letter count in string "+count);
        
        char Arr[] = str.toCharArray(); 
        for(int i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
        
    }
}