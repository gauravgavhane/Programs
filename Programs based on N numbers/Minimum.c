#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Minimum
//  Description :   Used to find the smallest number 
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers and return the smallest number from that numbers
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
    iRet = Minimum(ptr,iSize);
    printf("Minimum number is : %d\n",iRet);
    free(ptr);

    return 0;
}
/////////////////////////////////////////////////////////////////////
//
//  Input  :       11      -10       38      27      21
//  Output :       -10
//
/////////////////////////////////////////////////////////////////////