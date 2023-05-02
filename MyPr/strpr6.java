import java.util.*;
//Count whitespace in string
class MarvellousX
{
    public int Convertcap(String s)
    {
        int cnt = 0;
       char Arr[] = s.toCharArray();
       for(int i = 0;i < Arr.length; i++)
       {
          if(Arr[i] == ' ')
          {
            cnt++;
          }
       }
        return cnt;
    }
}
class strpr6
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();

        MarvellousX mobj = new MarvellousX();

       
      int icount = mobj.Convertcap(str);
      System.out.println("white spaces in string : "+icount);
    }
}