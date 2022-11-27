class Jagged1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
     
        System.out.println("Enter the number of rows : ");
        int iRows = sobj.nextInt();
        int iCol[];
       System.out.println("Enter the size of col1 : ");
        int iCol[] = sobj.nextInt();
           System.out.println("Enter the size of col2 : ");
        int iCol2 = sobj.nextInt();
           System.out.println("Enter the size of col3 : ");
        int iCol3 = sobj.nextInt();

        int Arr[][] = new Arr[rows][];
        int i = 0;
        for(i = 0; i < iRows ; i++)
        {
            for(int j = 0 ;j < i )
        }
        System.out.println(Arr.length); //3
        System.out.println(Arr[0].length);  //2
        System.out.println(Arr[1].length);  //4
        System.out.println(Arr[2].length);  //3
        System.out.println(Arr[0][1]);
        System.out.println(Arr[0][0]);
        System.out.println(Arr[2][2]);
         System.out.println(Arr[1][1]);
         System.out.println(Arr[1][3]);
         System.out.println(Arr[1][2]);
         System.out.println(Arr[2][1]);
    }
}