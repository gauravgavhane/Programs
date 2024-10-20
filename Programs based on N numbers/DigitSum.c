#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DigitSum
//  Description :   Used to perform summation of digits of number
//  Input :         Integer, Integer
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[],int iLength)
{
	int iCnt = 0,iDigit=0 ,iTemp = 0 ,iSum =0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{	
		iSum = 0;
		while(Arr[iCnt] != 0)
		{
			iTemp=Arr[iCnt]%10;
			iSum = iSum + iTemp;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
		printf("%d\t",iSum);
	}
	printf("\n");
}

////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the summation of digits of number
////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize =0, iRet =0,iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
		
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	DigitsSum(ptr,iSize);
	
	free(ptr);
	
	return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input :    N : 6
//  		   Elements : 8225   665   3   76   953   858
//
//  Output:    17     17    3   13   17    21
//
/////////////////////////////////////////////////////////////////////
