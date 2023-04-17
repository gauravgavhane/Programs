#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SearchLastOccurence
//  Description :   Used to search the last ocurrence of a number
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
  
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
            if(Arr[iCnt] == iNo)        
            {
                break;
            }
    }
        return iCnt;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept a another number and check
// whether that no is present or not and return last occcrence 
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

    iRet = SearchLastOccurance(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element last occured at : %d\n",iRet);
    }
     free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Enter number of elements : 5
//  Enter the values :  11      21       51      21      111
//  Enter the element to search : 21
//  Element first occured at : 3
//
/////////////////////////////////////////////////////////////////////