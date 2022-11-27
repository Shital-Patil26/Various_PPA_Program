#include<iostream>
using namespace std;

class Max
{
    public:
       // int a,b;
        int max1;
       /* Max()
        {
            a = 0;
            b = 0;
            max1 = 0;
        }*/
        int add(int a,int b)
        {
              
             if(a > b)
            {
                max1 = a;
            }
            else
            {
                max1 = b;
            }
            return max1;
        }
};
int main()
{
    int x,y;
    int max2 = 0;
    Max m;
    printf("Enter first number\n");
     scanf("%d",&x);
     printf("Enter Second number\n");
    scanf("%d",&y);
    max2 = m.add(x,y);
    printf("Maximum of two no is %d ",max2);


    return 0;
}