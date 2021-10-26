
#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iEven = 1, iOdd = 1;

    for(int i = 1; i <= iNo; i++)
    {
        if(i%2 == 0)
        {
            iEven *= i;
        }
        else
        {
            iOdd *= i;
        }
    }
    return (iEven-iOdd);
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    int iRet = FactorialDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}