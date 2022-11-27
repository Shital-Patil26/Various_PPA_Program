
class GenericMethod
{
    public static <T> void Display(T Arr[])
    {
        for(int i=0; i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
    public static void main(String A[])
    {
        Integer Arr[] = {10,20,30,40};
        Display(Arr);

        Character cArr[] = {'a','b','c','d'};
        Display(cArr);
        Float fArr[] = {10.9f,90.5f,30.3f,40.3f};
        Display(fArr);
    }
}