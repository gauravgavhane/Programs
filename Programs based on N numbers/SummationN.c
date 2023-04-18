#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SummationNumber
//  Description :   Used to perform summation of N numbers
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int SummationNumber(int Arr[], int iLength)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the summation of numbers
/////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = SummationNumber(ptr,iSize);

    printf("Summation is : %d\n",iRet);
    free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input  :       11      10       9       8
//  Output :       38
//
/////////////////////////////////////////////////////////////////////