
interface Circle
{
    float PI = 3.14f;

    float Area(float Radius);
    float Circumference(float Radius);
}

class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumference(float Radius)
    {
        return 2 * PI * Radius;
    }
}
class InterfaceDemo
{
    public static void main(String arr[])
    {
        System.out.println("Value of PI is "+Circle.PI);    // To defmonstrate public and static
          // Circle.PI = 7.12f;    // To demonstrate final
          Circle cobj = new Marvellous();
          float Ret = 0.0f;
          Ret = cobj.Area(10.5f);
          System.out.println("Area is : "+Ret);
          Ret = cobj.Circumference(10.5f);
          System.out.println("Circumference is : "+Ret);     
     }
}