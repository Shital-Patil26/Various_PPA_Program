class Demo
{
    public int No1;         //Non-static characteristics
    public int No2;         //Non-static characteristics
    public static int No3;      //static characteristics
    public static int No4;      //static characteristics

    static          //static block
    {
        System.out.println("Inside static block");
        No3 = 51;
        No4 = 101;
    }
    public Demo()
    {
        System.out.println("Inside constructor");
        No1 = 11;
        No2 = 21;
    }
    public void Fun()
    {
            System.out.println("Inside Non static method");

    }
    public static void gun()
    {
            System.out.println("Inside static method gun");

    }
}
class StaticDemo
{
    public static void main(String arg[])
    {
       System.out.println("Inside Main ");
       Demo obj1 = new Demo();

    }
}

