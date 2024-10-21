#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description :   Used to count diffrence between summation of even and odd digits
//  Input :         Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	while(iNo != 0)
	{
		iCnt = iNo % 10;
		if(iCnt < 6)
		{
			iFrequency++;
		}
		iNo = iNo / 10;
	}
	return iFrequency;
}

/////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and 
//  count frequency of such a digit which are less than 6
/////////////////////////////////////////////////////////////////////////
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("frequency of such a digit which are less than 6 : %d\n",iRet);
	
	return 0;

}

/////////////////////////////////////////////////////////////////////////
//
//  Input : 2395     
//  Output: 3
//  
//  Input : 1018     
//  Output: 3
//
/////////////////////////////////////////////////////////////////////////			 
