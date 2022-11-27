//SAME as constant characteristics of class from c++
class Base
{
    public int No1;
    public final int No2 = 11;
    public final int No3;
    public void fun()
    {
        System.out.println("Base fun");
    }
    public final void gun()
    {
        System.out.println("Base gun");
    }
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Derived fun");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}
class Final2
{
    public static void main(String arr[])
    {
        Base  bobj = new Derived();  
    }
}