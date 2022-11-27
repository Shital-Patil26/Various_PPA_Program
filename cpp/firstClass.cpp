#include<iostream>
using namespace std;
//Class Declaration
class Maths
{   
    public:             //Access Specifier
        int iNo1;       //Characteristic
        int iNo2;       //Characteristics

    Maths()             //conctructor (Default)
    {
        cout<<"Inside Default Constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Maths(int A,int B)          //CONSTRUCTOR (parameterised)
    {
        cout<<"Inside Parameterized Constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
    ~Maths()
    {
        cout<<"Inside Destructor\n";
        //Destructor
    }

    int Addition()  //beahaviour
    {
        return iNo1 + iNo2;
    }

    int Substraction()      //behaviour
    {
        return iNo1 - iNo2;
    }
};

int main()   
{
    cout<<"Inside Main Function\n";
    Maths mobj1;
    cout<<"\nMaths mobj\n";
    Maths mobj2(11,10); 
    int ret = 0;

    ret = mobj2.Addition();
    cout<<"Additionn is  :"<<ret<<"\n";

    ret = mobj1.Substraction();
    cout<<"substraction is  ...."<<ret<<"\n";


    return 0;
}