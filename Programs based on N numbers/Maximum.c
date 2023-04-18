#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Maximum
//  Description :   Used to find the largest number 
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])        
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers and return the largest number from that numbers
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
    iRet = Maximum(ptr,iSize);
    printf("Maximum number is : %d\n",iRet);
    free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input  :       11      -10       38      27      21
//  Output :       38
//
/////////////////////////////////////////////////////////////////////