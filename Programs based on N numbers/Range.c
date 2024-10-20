
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Range
//  Description :   Used to display numbers from a range
//  Input :         Integer, Integer, Integer, Integer
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void Range(int Arr[],int iLength,int iStart , int iEnd)
{
	int iCnt = 0;

	printf("Elements from the range : ");

	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept range, display all elements from that range
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0,iRet = 0,iCnt =0,iValue1=0,iValue2=0;
	int *ptr = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	printf("Enter the starting point : ");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point : ");
	scanf("%d",&iValue2);
	
	ptr = (int*) malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	for(iCnt= 0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Range(ptr,iSize,iValue1,iValue2);
	
	free(ptr);

	return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : N : 6
//          Start :60
//          End :90 
//          Elements : 85 66 3 66 93 88
//
//  Output: 66 76 88
//  
/////////////////////////////////////////////////////////////////////
