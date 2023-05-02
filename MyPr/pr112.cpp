#include<iostream>
using namespace std;

class Anagram
{
    public:
    int iValue1 = 0;
    int iValue2 = 0;

        Anagram(int i,int j)
        {
            iValue1 = i;
            iValue2 = j;
        }

        bool CheckAnagram()
        {
            int iFreuency[10] = {0};
            bool bflag = true;
            while(iValue1 != 0)
            {
                iFreuency[(iValue1 % 10)]++;
                iValue1 = iValue1 / 10;
            }
            while(iValue2 != 0)
            {
                iFreuency[(iValue2 % 10)]--;
                iValue2 = iValue2 / 10;
            }

            for(int i = 0;i < 10;i++)
            {
                if(iFreuency[i] != 0)
                {
                    bflag = false;
                    break;
                }
            }
            return bflag;
        }

};

int main()
{
    int iNo1 = 0,iNo2 = 0;
    cout<<"Enter First Number : \n";
    cin>>iNo1;
     cout<<"Enter Second Number : \n";
    cin>>iNo2;
    
    Anagram obj(iNo1,iNo2);
    bool bRet = obj.CheckAnagram();
    if(bRet == true)
    {
        cout<<"Number is anagram number \n";
    }
    else
    {
        cout<<"Number isnot anagram\n";
    }
    return 0;
}