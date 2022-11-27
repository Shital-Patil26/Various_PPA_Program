class Demo
{
    public int No1;
    public int No2;

    public Demo(int a,int b)
    {
        No1 = a;
        No2 = b;
    }
}
class EqualsDemo
{
    public static void main(String A[])
    {
        //Demo obj1 = new Demo(11,21);
       // Demo obj2 = new Demo(11,21);
       //if(obj1.equals(obj1))  //different
        String s1 = "Hello";
        String s2 = "Hello";

        System.out.println("Hashcode of the s1 : "+s1.hashCode());  //10001
        System.out.println("Hashcode of the s2 : "+s2.hashCode());   //-

        if(s1.equals(s2))  //if("Hello" == "Hello") compare data
        {
            System.out.println("Object are Same");
        }
        else
        {
             System.out.println("Object are different");
        }

        if(s1 == s2)            //compare hashcode if(10001 == 10001)
          {
            System.out.println("Object are Same");
        }
        else
        {
             System.out.println("Object are different");
        }
    }
}