
interface Circle
{
     float PI = 3.14f;       // public static final float PI = 3.14f;

     float Area(float Radius);     // public abstract float Area(float Radius);
     float Circumfarance(float Radius); // public abstract float Circumfarance(float Radius);
}

class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumferance(float Radius)
    {
        return 2 * PI * Radius;
    }
}
class InterfaceDemo
{
    public static void main(String arr[])
    {
        System.out.println("Value of PI is");

    }
}