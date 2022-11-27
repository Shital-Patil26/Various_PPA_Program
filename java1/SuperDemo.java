
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside Default Constructor");
    }
    public Base(int No1,int No2)
    {
        this();
        this.A = No1;
        this.B = No2;
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
        System.out.println("Value of A from fun method  is :"+this.A);
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived(int i,int j,int k,int l)
    {
        super(k,l);             //first usecase
        this.X = i;
        this.Y = j;
    }
    public void gun()
    {
        System.out.println("Value of A from gun method is :"+super.A);      //2 nd usecase
        fun();        //3rd usecase
    }
}
class SuperDemo
{
    public static void main(String a[])
    {
        Derived dobj = new Derived(11,21,51,101);
        dobj.gun();
    }
}