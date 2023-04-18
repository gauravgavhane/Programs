#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Frequency
//  Description :   Used to count the frequency of a number
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

/////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept a another number and 
// count the frequency of another number.
/////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to calculate the frequency\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iSize, iValue);
    printf("Frequency is : %d\n",iRet);

     free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input  :       11      15       36      27      11      [ 11 ]
//  Output :       2
//
/////////////////////////////////////////////////////////////////////
