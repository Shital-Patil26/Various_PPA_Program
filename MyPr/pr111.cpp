#include<iostream>
using namespace std;

class Digit
{
    public:
    int iValue;

     Digit()
     {
        iValue = 0;
     }
     Digit(int i)
     {
        iValue = i;
     }
     void MaxFrequency()
     {
        int iTemp = iValue;
        int Frequency[10] = {0};
        int iDigit = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            Frequency[iDigit]++;
            iTemp = iTemp / 10;
        }
        int iMaxFrequency = 0;
        int iMaxDigit = 0;

        for(int iCnt = 0;iCnt < 10;iCnt++)
        {
            if(Frequency[iCnt] > iMaxFrequency)
            {
                iMaxFrequency = Frequency[iCnt];
                iMaxDigit = iCnt;
            }
        }
        cout<<"Maximum time occured  digit :"<<iMaxDigit<<" and its frequncy is : "<<iMaxFrequency<<" times";
     }
};
int main()
{
    int iNo = 0;

    cout<<"Enter Number : \n";
    cin>>iNo;

    Digit obj(iNo);
    obj.MaxFrequency();

    return 0;
}