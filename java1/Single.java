class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base Constructor");
        this.A = 10;
        this.B = 20;
    }
     public void fun()      //Defination
    {
        System.out.println("Inside Base Fun");
    }
     public void gun()      //Defination
    {
        System.out.println("Inside Base gun");
    }
     public void fun(int No)    //Overloaded Defination
    {
        System.out.println("Inside Base Fun with one integer");
    }
}
//class Derived : public Base
class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
          System.out.println("Derived Constructor");
        this.X=30;
        this.Y= 40;

    }
    public void sun()       //Defination
    {
        System.out.println("Inside Derived Sun");
    }
    public void gun()       //Overrided Defination
    {
        System.out.println("Inside Derived gun");
    }
}
class Single
{
    public static void  main(String arr[])
    {
        Base bobj1 = new Base();        //No Casting

       //Derived dobj1 = new Derived();      //No casting

         Base bobj2 = new Derived();     //Upcasting
     
     //   Derived dobj2 = new Base()        //Downcasting

    }
}