#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description :   Used to find diffrence between largest and smallest number
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////////////////


int Difference(int Arr[],int iLength)
{
	int iCnt = 0,iDiff=0;
	int iMin = Arr[0];
	int iMax = Arr[0];
	
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
		else if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	iDiff = iMax - iMin;
	return iDiff;
}

/////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return the diffrence between largest and smallest
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize =0, iRet =0,iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable t0 allocate memory");
		return -1;
	}
		
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Difference(ptr,iSize);
	
	printf("Difference between largest and smallest element is %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : 	N : 6
//  			Elements :  85  66  3  66  93  88
//
//  Output:     90 (93-3)
//
/////////////////////////////////////////////////////////////////////