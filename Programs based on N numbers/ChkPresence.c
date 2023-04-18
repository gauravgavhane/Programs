#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Search
//  Description :   Used to check whether a number is present
//  Input :         Integer, Integer, Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == iNo)        
            {
                break;
            }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept a another number and 
// check whether that number is present in array or not
/////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    bRet = Search(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("Element is present in array\n");
    }
    else
    {
        printf("Element is not present in array\n");
    }

    free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input  :       19      15       36      22      11      [ 11 ]
//  Output :       Element is present in array
//
//  Input  :       19      15       36      22      11      [ 16 ]
//  Output :       Element is not present in array
//
/////////////////////////////////////////////////////////////////////
