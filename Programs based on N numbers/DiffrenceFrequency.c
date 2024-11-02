#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Frequency
//  Description :   Used to calculate difference between the frequency of even and odd numbers
//  Input :         Integer, Integer
//  Output :        Integer
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0, iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    iFrequency = iEven - iOdd;

    return iFrequency;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return the difference between the frequency of even and odd numbers
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCount = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }
    printf("\n");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        printf("Enter element %d : ", iCount+1);
        scanf("%d",&Brr[iCount]);
    }
    printf("\n");

    iRet = Frequency(Brr, iLength);

    printf("Diffrence between Frequency of even and odd numbers is : %d\n",iRet);
    printf("\n");

    free(Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input  : N : 7
//           Elements: 85  66  3  80  93  88  90
//  Output : 1  (4-3)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

