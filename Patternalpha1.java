/*ABCDEFEDCBA
BCDEFEDCB
CDEFEDC
DEFED
EFE
F*/
class Patternalpha1
{
    public static void main(String arg[])
    {
        int i,j,alpha=64;
        for(i=1;i<=6;i++)
        {
            for(j=i;j<=6;j++)
            {
                System.out.print((char)(alpha+j));
            }
            for(j=5;j>=i;j--)
            {
                System.out.print((char)(alpha+j));
            }
            System.out.println();
        }
    }
}