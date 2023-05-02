import java.io.*;
class pr17
{
    public static void main(String a[])
    {
        int x = 10;
int y = x++;
int z = ++x;
int result = x + y + z;
    // y = 10; x= 12  z = 12
    System.out.println("Result : "+result);   //o/p 34
    }
}