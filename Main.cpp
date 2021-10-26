
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int FactorialDiff(int);
};

int ArithmeticX::FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iEven = 1, iOdd = 1;

    while(iNo > 0)
    {
        if(iNo%2 == 0)
        {
            iEven *= iNo;
        }
        else
        {
            iOdd *= iNo;
        }

        iNo--;
    }

    return (iEven-iOdd);
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    int iRet = aobj.FactorialDiff(iValue);

    cout<<iRet<<endl;

    return 0;
}