import java.util.*;
//Convert String  in capital letter
class MarvellousX
{
    public String Convertcap(String s)
    {
        int cnt = 0;
       char Arr[] = s.toCharArray();
       for(int i = 0;i < Arr.length; i++)
       {
          if(Arr[i] >= 'a' && Arr[i] <= 'z')
          {
            Arr[i] = (char)(Arr[i]-32);
          }
       }
       String Uppercase = new String(Arr);
        return Uppercase;
    }
}
class strpr7
{
    public static void main(String a[])
    {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = s.nextLine();

        MarvellousX mobj = new MarvellousX();

       
      String strupper = mobj.Convertcap(str);
      System.out.println("white spaces in string : "+strupper);
    }
}