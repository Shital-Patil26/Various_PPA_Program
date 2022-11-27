
class ArrayDemo
{
    public static void main(String arg[])
    {
        //Ways of creating Single dimensional array 
        int Arr1[] = {10,20,30,40,50};
        // int Arr2[4] = {10,20,30,40}; Explicite size is not allowed in java
        //i.e. [4] is not allowed

        int Arr3[] = new int[4];//Dynamic memory allocation
        Arr3[0] = 10;
        Arr3[1] = 20;
        Arr3[2] = 30;
        Arr3[3] = 40;

        
        //int Arr4[] = new int[4] {10,20,30,40};  int[4] is not allowed in immediate iniatization
        int Arr4[] = new int[] {10,20,30,40};  //Dynamic memory with initialization list


    }
}