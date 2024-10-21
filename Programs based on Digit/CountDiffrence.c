#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description :   Used to count diffrence between summation of even and odd digits
//  Input :         Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
	int iDigit = 0;
	int iSumEven = 0;
	int iSumOdd = 0;
	int iDiff = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10 ;
		
		if(iDigit % 2 == 0)
		{
			iSumEven = iSumEven + iDigit;
		}
		else
		{
			iSumOdd = iSumOdd + iDigit;
		}
		iNo = iNo / 10;
	}
	
	iDiff = iSumEven - iSumOdd;
	return iDiff;
}

/////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and 
//  return summation of even digits and summation of odd digits
/////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("Diffrence between summation of even and odd digits : %d\n",iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//  Input : 2395     
//  Output: -15  (2 - 17)
//  
//  Input : 1018     
//  Output: 6 (8 - 2)
//
/////////////////////////////////////////////////////////////////////////
