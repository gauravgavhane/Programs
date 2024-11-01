#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Product
//  Description :   Used to perform product of all odd numbers
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Product(int Arr[],int iLength)
{
	int iCnt = 0 ,iMult =1;
	
	for(iCnt =0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] % 2 != 0)
		{	
			iMult = iMult * Arr[iCnt];
		}
	}
	return iMult;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return product of all odd elements
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize =0, iRet =0,iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize*sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable t0 allocate memory");
		return -1;
	}
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Product(p,iSize);
	
	printf("Product is %d\n",iRet);
	
	free(p);
	
	return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : N : 6
//          No :66 
//          Elements : 85 66 3 66 93 88
//
//  Output: 255
//  
/////////////////////////////////////////////////////////////////////
