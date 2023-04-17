#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SearchFirstOccurence
//  Description :   Used to search the first ocurrence of a number
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
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
        return -1;
    }
    else
    {
        return iCnt;
    }
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept a another number and check
// whether that no is present or not and return occcrence of that no
/////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search : ");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurance(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element first occured at : %d\n",iRet);
    }
     free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Enter number of elements : 5
//  Enter the values :  11      21       51      101      51
//  Enter the element to search : 51
//  Element first occured at : 2
//
/////////////////////////////////////////////////////////////////////
