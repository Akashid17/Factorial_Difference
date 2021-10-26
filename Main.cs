
using System;

class ArithmeticX
{
	public int FactorialDiff(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		int iEven = 1, iOdd = 1;

		do
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
		} while (iNo != 0);

		return (iEven-iOdd);
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.FactorialDiff(iValue);

		Console.WriteLine(iRet);
	}
}