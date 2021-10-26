
import java.lang.*;
import java.io.*;

class ArithmeticX
{
	public int FactorialDiff(int iNo)
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
		return(iEven-iOdd);
	}
}

class Main
{
	public static void main(String[] atgs) throws Exception
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Number");
		int iValue = Integer.parseInt(bobj.readLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.FactorialDiff(iValue);

		System.out.println(iRet);
	}
}